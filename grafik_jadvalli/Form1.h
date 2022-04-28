#pragma once

namespace grafik_jadvalli {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected: 
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Silver;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(14, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->LegendText = L"Maxsulotlar xajmi";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->LegendText = L"Soft Daromad";
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1100, 275);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 293);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(868, 235);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellEndEdit);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(904, 293);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(209, 228);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(371, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(292, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Yangilash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1127, 577);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1145, 624);
			this->MinimumSize = System::Drawing::Size(1145, 624);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		DataTable^ Jadval;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 listBox1->Items->Add("Pie"); listBox1->Items->Add("Line");
				 this->Text = "Grafik ma'lumotlar";
				 Jadval = gcnew DataTable();
				 // добавление  столбцов
				 Jadval->Columns->Add("Oy", String::typeid);
				 Jadval->Columns->Add("Sotib olingan max.soni", Int64::typeid);
				 Jadval->Columns->Add("Xarajatlar", Int64::typeid);
				 Jadval->Columns->Add("Daromat", Int64::typeid);
				 Jadval->Columns->Add("Sof daromat", Int64::typeid);


				  DataRow^ Qator = Jadval->NewRow();
				 // добавление 1 строки
				 Qator["Oy"] = "May"; Qator["Sotib olingan max.soni"] = 10;
				 Qator["Xarajatlar"] = 3; Qator["Daromat"] = 15;
				 Qator["Sof daromat"] = Convert::ToInt64(Qator["Daromat"]) - Convert::ToInt64(Qator["Xarajatlar"]);
				 Jadval->Rows->Add(Qator);
				 // добавление 2 строки
				 Qator = Jadval->NewRow();
				 Qator["Oy"] = "Iyun"; Qator["Sotib olingan max.soni"] = 20;
				 Qator["Xarajatlar"] = 5; Qator["Daromat"] = 25;
				 Qator["Sof daromat"] = Convert::ToInt64(Qator["Daromat"]) - Convert::ToInt64(Qator["Xarajatlar"]);
				 Jadval->Rows->Add(Qator);
				 // добавление 3 строки
				 Qator = Jadval->NewRow();
				 Qator["Oy"] = "Iyul"; Qator["Sotib olingan max.soni"] = 30;
				 Qator["Xarajatlar"] = 10; Qator["Daromat"] = 35;
				 Qator["Sof daromat"] = Convert::ToInt64(Qator["Daromat"]) - Convert::ToInt64(Qator["Xarajatlar"]);
				 Jadval->Rows->Add(Qator);
				 // добавление 4 строки
				 Qator = Jadval->NewRow();
				 Qator["Oy"] = "Avgust"; Qator["Sotib olingan max.soni"] = 40;
				 Qator["Xarajatlar"] = 15; Qator["Daromat"] = 45;
				 Qator["Sof daromat"] = Convert::ToInt64(Qator["Daromat"]) - Convert::ToInt64(Qator["Xarajatlar"]);
				 Jadval->Rows->Add(Qator);
				 // добавление 5 строки
				 Qator = Jadval->NewRow();
				 Qator["Oy"] = "Sentyabr"; Qator["Sotib olingan max.soni"] = 50;
				 Qator["Xarajatlar"] = 20; Qator["Daromat"] = 55;
				 Qator["Sof daromat"] = Convert::ToInt64(Qator["Daromat"]) - Convert::ToInt64(Qator["Xarajatlar"]);
				 Jadval->Rows->Add(Qator);

				 dataGridView1->DataSource = Jadval;
				 chart1->DataSource = Jadval;
				 chart1->Series["Series1"]->XValueMember = "Oy";
				 chart1->Series["Series2"]->XValueMember = "Oy";
				 chart1->Series["Series1"]->YValueMembers = "Sotib olingan max.soni";
				 chart1->Series["Series2"]->YValueMembers = "Sof daromat";
				 chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				 chart1->Series["Series2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;

				 chart1->Series["Series1"] ->Color = Color::Aqua;
				 chart1->Series["Series2"] ->Color = Color::Yellow;
				 chart1->DataBind();

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 dio();
		 }

		 void dio() {
				this->Text = "Grafik ma'lumotlar";
				 Jadval = gcnew DataTable();
				 // добавление  столбцов
				 Jadval->Columns->Add("Oy", String::typeid);
				 Jadval->Columns->Add("Sotib olingan max.soni", Int64::typeid);
				 Jadval->Columns->Add("Xarajatlar", Int64::typeid);
				 Jadval->Columns->Add("Daromat", Int64::typeid);
				 Jadval->Columns->Add("Sof daromat", Int64::typeid);

				  DataRow ^ Qator = Jadval->NewRow();
				  Qator["Oy"] = dataGridView1->Rows[0]->Cells[0]->Value;
				  Qator["Sotib olingan max.soni"] = dataGridView1->Rows[0]->Cells[1]->Value;
				  Qator["Xarajatlar"] = dataGridView1->Rows[0]->Cells[2]->Value;
				  Qator["Daromat"] =dataGridView1->Rows[0]->Cells[3]->Value;
				  Qator["Sof daromat"] = Convert::ToInt64(dataGridView1->Rows[0]->Cells[3]->Value) - Convert::ToInt64(
					  dataGridView1->Rows[0]->Cells[2]->Value);
				  Jadval->Rows->Add(Qator);

				  Qator = Jadval->NewRow();
				  Qator["Oy"] = dataGridView1->Rows[1]->Cells[0]->Value;
				  Qator["Sotib olingan max.soni"] = dataGridView1->Rows[1]->Cells[1]->Value;
				  Qator["Xarajatlar"] = dataGridView1->Rows[1]->Cells[2]->Value;
				  Qator["Daromat"] =dataGridView1->Rows[1]->Cells[3]->Value;
				  Qator["Sof daromat"] = Convert::ToInt64(dataGridView1->Rows[1]->Cells[3]->Value) - Convert::ToInt64(
					  dataGridView1->Rows[1]->Cells[2]->Value);
				  Jadval->Rows->Add(Qator);

				  Qator = Jadval->NewRow();
				  Qator["Oy"] = dataGridView1->Rows[2]->Cells[0]->Value;
				  Qator["Sotib olingan max.soni"] = dataGridView1->Rows[2]->Cells[1]->Value;
				  Qator["Xarajatlar"] = dataGridView1->Rows[2]->Cells[2]->Value;
				  Qator["Daromat"] =dataGridView1->Rows[2]->Cells[3]->Value;
				  Qator["Sof daromat"] = Convert::ToInt64(dataGridView1->Rows[2]->Cells[3]->Value) - Convert::ToInt64(
					  dataGridView1->Rows[2]->Cells[2]->Value);
				  Jadval->Rows->Add(Qator);

				  Qator = Jadval->NewRow();
				  Qator["Oy"] = dataGridView1->Rows[3]->Cells[0]->Value;
				  Qator["Sotib olingan max.soni"] = dataGridView1->Rows[3]->Cells[1]->Value;
				  Qator["Xarajatlar"] = dataGridView1->Rows[3]->Cells[2]->Value;
				  Qator["Daromat"] =dataGridView1->Rows[3]->Cells[3]->Value;
				  Qator["Sof daromat"] = Convert::ToInt64(dataGridView1->Rows[3]->Cells[3]->Value) - Convert::ToInt64(
					  dataGridView1->Rows[3]->Cells[2]->Value);
				  Jadval->Rows->Add(Qator);

				  Qator = Jadval->NewRow();
				  Qator["Oy"] = dataGridView1->Rows[4]->Cells[0]->Value;
				  Qator["Sotib olingan max.soni"] = dataGridView1->Rows[4]->Cells[1]->Value;
				  Qator["Xarajatlar"] = dataGridView1->Rows[4]->Cells[2]->Value;
				  Qator["Daromat"] =dataGridView1->Rows[4]->Cells[3]->Value;
				  Qator["Sof daromat"] = Convert::ToInt64(dataGridView1->Rows[4]->Cells[3]->Value) - Convert::ToInt64(
					  dataGridView1->Rows[4]->Cells[2]->Value);
				  Jadval->Rows->Add(Qator);

				  chart1->DataSource = Jadval;

				  chart1->DataSource = Jadval;
				 chart1->Series["Series1"]->XValueMember = "Oy";
				 chart1->Series["Series2"]->XValueMember = "Oy";
				 chart1->Series["Series1"]->YValueMembers = "Sotib olingan max.soni";
				 chart1->Series["Series2"]->YValueMembers = "Sof daromat";
				 chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				 chart1->Series["Series2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;

				 chart1->Series["Series1"] ->Color = Color::Aqua;
				 chart1->Series["Series2"] ->Color = Color::Yellow;
				 chart1->DataBind();
				 dataGridView1->DataSource = Jadval; }



private: System::Void dataGridView1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 dio();
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->Text == "Transparent") return;
			 this->chart1->Series["Series1"]->ChartTypeName = (listBox1->Text);
			 this->chart1->Series["Series2"]->ChartTypeName = (listBox1->Text);
		 }
};
}

