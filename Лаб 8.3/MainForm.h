#pragma once
#include "Deck.h"
namespace ���83 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			num_your_free_card_space = 1;
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_take_card;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::Button^ button2;
	private: Deck^ deck;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_1;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_5;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_2;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_3;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_4;
	private: int num_your_free_card_space;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::PictureBox^ pictureBox6;
			System::Windows::Forms::PictureBox^ pictureBox7;
			System::Windows::Forms::PictureBox^ pictureBox8;
			System::Windows::Forms::PictureBox^ pictureBox9;
			System::Windows::Forms::PictureBox^ pictureBox10;
			System::Windows::Forms::PictureBox^ pictureBox11;
			this->pictureBox_your_card_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_take_card = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->button2 = (gcnew System::Windows::Forms::Button());
			pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox_your_card_5
			// 
			this->pictureBox_your_card_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_5.Image")));
			this->pictureBox_your_card_5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_5.InitialImage")));
			this->pictureBox_your_card_5->Location = System::Drawing::Point(779, 498);
			this->pictureBox_your_card_5->Name = L"pictureBox_your_card_5";
			this->pictureBox_your_card_5->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_5->TabIndex = 1;
			this->pictureBox_your_card_5->TabStop = false;
			// 
			// pictureBox_your_card_2
			// 
			this->pictureBox_your_card_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_2.Image")));
			this->pictureBox_your_card_2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_2.InitialImage")));
			this->pictureBox_your_card_2->Location = System::Drawing::Point(590, 498);
			this->pictureBox_your_card_2->Name = L"pictureBox_your_card_2";
			this->pictureBox_your_card_2->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_2->TabIndex = 7;
			this->pictureBox_your_card_2->TabStop = false;
			// 
			// pictureBox_your_card_3
			// 
			this->pictureBox_your_card_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_3.Image")));
			this->pictureBox_your_card_3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_3.InitialImage")));
			this->pictureBox_your_card_3->Location = System::Drawing::Point(653, 498);
			this->pictureBox_your_card_3->Name = L"pictureBox_your_card_3";
			this->pictureBox_your_card_3->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_3->TabIndex = 8;
			this->pictureBox_your_card_3->TabStop = false;
			// 
			// pictureBox_your_card_4
			// 
			this->pictureBox_your_card_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_4.Image")));
			this->pictureBox_your_card_4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_4.InitialImage")));
			this->pictureBox_your_card_4->Location = System::Drawing::Point(716, 498);
			this->pictureBox_your_card_4->Name = L"pictureBox_your_card_4";
			this->pictureBox_your_card_4->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_4->TabIndex = 9;
			this->pictureBox_your_card_4->TabStop = false;
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
			// pictureBox_your_card_1
			// 
			this->pictureBox_your_card_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_1.Image")));
			this->pictureBox_your_card_1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_1.InitialImage")));
			this->pictureBox_your_card_1->Location = System::Drawing::Point(527, 498);
			this->pictureBox_your_card_1->Name = L"pictureBox_your_card_1";
			this->pictureBox_your_card_1->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_1->TabIndex = 6;
			this->pictureBox_your_card_1->TabStop = false;
			// 
			// button_take_card
			// 
			this->button_take_card->Location = System::Drawing::Point(884, 480);
			this->button_take_card->Name = L"button_take_card";
			this->button_take_card->Size = System::Drawing::Size(104, 44);
			this->button_take_card->TabIndex = 5;
			this->button_take_card->Text = L"����� �����";
			this->button_take_card->UseVisualStyleBackColor = true;
			this->button_take_card->Click += gcnew System::EventHandler(this, &MainForm::button_take_card_Click);
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
			this->label1->Text = L"���!";
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
			this->label2->Text = L"���!";
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
			this->label3->Text = L"����";
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(827, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"�������� ����: ";
			this->label4->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(895, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 36);
			this->button2->TabIndex = 21;
			this->button2->Text = L"�������� ������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 600);
			this->Controls->Add(this->button2);
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
			this->Controls->Add(this->pictureBox_your_card_4);
			this->Controls->Add(this->pictureBox_your_card_3);
			this->Controls->Add(this->pictureBox_your_card_2);
			this->Controls->Add(this->pictureBox_your_card_1);
			this->Controls->Add(this->button_take_card);
			this->Controls->Add(this->pictureBox_your_card_5);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	array <Bitmap^>^ pictarr = gcnew array <Bitmap^>(10);
	pictarr[0] = gcnew Bitmap("Images\\1.png");
	pictarr[1] = gcnew Bitmap("Images\\2.png");
	pictarr[2] = gcnew Bitmap("Images\\3.png");
	pictarr[3] = gcnew Bitmap("Images\\4.png");
	pictarr[4] = gcnew Bitmap("Images\\5.png");
	pictarr[5] = gcnew Bitmap("Images\\6.png");
	pictarr[6] = gcnew Bitmap("Images\\7.png");
	pictarr[7] = gcnew Bitmap("Images\\8.png");
	pictarr[8] = gcnew Bitmap("Images\\9.png");
	pictarr[9] = gcnew Bitmap("Images\\10.png");
	this->deck = gcnew Deck();
	for (size_t i = 0; i < 10; i++)
	{
		this->deck->AddCard(i+1,i, pictarr[i]);
	}
	this->deck->Reshafle();
}
private: System::Void button_take_card_Click(System::Object^ sender, System::EventArgs^ e) {
	if (num_your_free_card_space < 6) {
		Card^ current_card;
		current_card = this->deck->GetUpperCard();
		if (num_your_free_card_space == 1)
			pictureBox_your_card_1->Image = current_card->picture;
		if (num_your_free_card_space == 2)
			pictureBox_your_card_2->Image = current_card->picture;
		if (num_your_free_card_space == 3)
			pictureBox_your_card_3->Image = current_card->picture;
		if (num_your_free_card_space == 4)
			pictureBox_your_card_4->Image = current_card->picture;
		if (num_your_free_card_space == 5)
			pictureBox_your_card_5->Image = current_card->picture;
	num_your_free_card_space++;
	deck->Reshafle();
	}
}
};
}
