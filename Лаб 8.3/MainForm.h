#pragma once
#include "Deck.h"
namespace Ћаб83 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::PictureBox^ pictureBox2;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::PictureBox^ pictureBox1;
			System::Windows::Forms::PictureBox^ pictureBox3;
			System::Windows::Forms::PictureBox^ pictureBox4;
			System::Windows::Forms::PictureBox^ pictureBox5;
			System::Windows::Forms::PictureBox^ pictureBox6;
			System::Windows::Forms::PictureBox^ pictureBox7;
			System::Windows::Forms::PictureBox^ pictureBox8;
			System::Windows::Forms::PictureBox^ pictureBox9;
			System::Windows::Forms::PictureBox^ pictureBox10;
			System::Windows::Forms::PictureBox^ pictureBox11;
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			pictureBox2->Location = System::Drawing::Point(779, 498);
			pictureBox2->Name = L"pictureBox2";
			pictureBox2->Size = System::Drawing::Size(57, 90);
			pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox2->TabIndex = 1;
			pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(884, 480);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 44);
			this->button1->TabIndex = 5;
			this->button1->Text = L"¬з€ть карту";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			pictureBox1->Location = System::Drawing::Point(527, 498);
			pictureBox1->Name = L"pictureBox1";
			pictureBox1->Size = System::Drawing::Size(57, 90);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox1->TabIndex = 6;
			pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			pictureBox3->Location = System::Drawing::Point(590, 498);
			pictureBox3->Name = L"pictureBox3";
			pictureBox3->Size = System::Drawing::Size(57, 90);
			pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox3->TabIndex = 7;
			pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			pictureBox4->Location = System::Drawing::Point(653, 498);
			pictureBox4->Name = L"pictureBox4";
			pictureBox4->Size = System::Drawing::Size(57, 90);
			pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox4->TabIndex = 8;
			pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			pictureBox5->Location = System::Drawing::Point(716, 498);
			pictureBox5->Name = L"pictureBox5";
			pictureBox5->Size = System::Drawing::Size(57, 90);
			pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox5->TabIndex = 9;
			pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			pictureBox6->Location = System::Drawing::Point(779, 12);
			pictureBox6->Name = L"pictureBox6";
			pictureBox6->Size = System::Drawing::Size(57, 90);
			pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox6->TabIndex = 10;
			pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			pictureBox7->Location = System::Drawing::Point(716, 12);
			pictureBox7->Name = L"pictureBox7";
			pictureBox7->Size = System::Drawing::Size(57, 90);
			pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox7->TabIndex = 11;
			pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			pictureBox8->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.InitialImage")));
			pictureBox8->Location = System::Drawing::Point(653, 12);
			pictureBox8->Name = L"pictureBox8";
			pictureBox8->Size = System::Drawing::Size(57, 90);
			pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox8->TabIndex = 12;
			pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			pictureBox9->Location = System::Drawing::Point(590, 12);
			pictureBox9->Name = L"pictureBox9";
			pictureBox9->Size = System::Drawing::Size(57, 90);
			pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox9->TabIndex = 13;
			pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			pictureBox10->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.InitialImage")));
			pictureBox10->Location = System::Drawing::Point(527, 12);
			pictureBox10->Name = L"pictureBox10";
			pictureBox10->Size = System::Drawing::Size(57, 90);
			pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox10->TabIndex = 14;
			pictureBox10->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(662, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 29);
			this->label1->TabIndex = 15;
			this->label1->Text = L"ѕас!";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(662, 444);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 29);
			this->label2->TabIndex = 16;
			this->label2->Text = L"ѕас!";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(68, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"—чЄт";
			this->label3->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(40, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(133, 175);
			this->dataGridView1->TabIndex = 18;
			// 
			// pictureBox11
			// 
			pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			pictureBox11->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.InitialImage")));
			pictureBox11->Location = System::Drawing::Point(925, 304);
			pictureBox11->Name = L"pictureBox11";
			pictureBox11->Size = System::Drawing::Size(63, 99);
			pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox11->TabIndex = 19;
			pictureBox11->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(827, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"ќсталось карт: ";
			this->label4->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 600);
			this->Controls->Add(this->label4);
			this->Controls->Add(pictureBox11);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(pictureBox10);
			this->Controls->Add(pictureBox9);
			this->Controls->Add(pictureBox8);
			this->Controls->Add(pictureBox7);
			this->Controls->Add(pictureBox6);
			this->Controls->Add(pictureBox5);
			this->Controls->Add(pictureBox4);
			this->Controls->Add(pictureBox3);
			this->Controls->Add(pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(pictureBox2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
