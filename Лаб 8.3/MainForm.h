#pragma once
#include "Deck.h"
namespace Лаб83 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	void Enemy_taking_turn() {

	}
	public ref class MainForm : public System::Windows::Forms::Form
	{

	private: int score_enemy;
	private: int score_you;
	private: int pass_you;
	private: int pass_enemy;
	private: Deck^ deck;
	private: int num_your_free_card_space_you;
	private: int num_your_free_card_space_enemy;
	private: int table_flag;
	public:
		MainForm(void)
		{
			pictarr = gcnew array <Bitmap^>(11);
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
			pictarr[10] = gcnew Bitmap("Images\\0.png");
			this->deck = gcnew Deck();
			num_your_free_card_space_you = 1;
			num_your_free_card_space_enemy = 1;
			score_enemy = 0;
			score_you = 0;
			pass_you = 0;
			pass_enemy = 0;
			table_flag = 0;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_take_card;
	private: System::Windows::Forms::Label^ label_pass_enemy;
	private: System::Windows::Forms::Label^ label_pass_you;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ table;

	private: System::Windows::Forms::Label^ label_cards_left;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_1;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_5;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_2;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_3;
	private: System::Windows::Forms::PictureBox^ pictureBox_your_card_4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ You;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Enemy;
	private: System::Windows::Forms::Label^ label_score_you;
	private: System::Windows::Forms::Label^ label_score_enemy;
	private: System::Windows::Forms::PictureBox^ pictureBox_enemy_card_5;
	private: System::Windows::Forms::PictureBox^ pictureBox_enemy_card_4;
	private: System::Windows::Forms::PictureBox^ pictureBox_enemy_card_3;
	private: System::Windows::Forms::Button^ button_puss_you;
	private: System::Windows::Forms::PictureBox^ pictureBox_enemy_card_2;
	private: System::Windows::Forms::PictureBox^ pictureBox_enemy_card_1;
	private: void Enemy_Taking_turn() {
		if (score_enemy <= score_you&& score_enemy<=21) {
			if (score_enemy <= 17) {
				Card^ current_card;
				current_card = this->deck->GetUpperCard();
				if (num_your_free_card_space_enemy == 1) {
					pictureBox_enemy_card_1->Image = current_card->picture;
					score_enemy += current_card->Get_Cost();
					label_score_enemy->Text = score_enemy.ToString() + "\\21";
					if (score_enemy > 21)
						label_score_enemy->ForeColor = System::Drawing::Color::Red;
				}
				if (num_your_free_card_space_enemy == 2) {
					pictureBox_enemy_card_2->Image = current_card->picture;
					score_enemy += current_card->Get_Cost();
					label_score_enemy->Text = score_enemy.ToString() + "\\21";
					if (score_enemy > 21)
						label_score_enemy->ForeColor = System::Drawing::Color::Red;
				}
				if (num_your_free_card_space_enemy == 3) {
					pictureBox_enemy_card_3->Image = current_card->picture;
					score_enemy += current_card->Get_Cost();
					label_score_enemy->Text = score_enemy.ToString() + "\\21";
					if (score_enemy > 21)
						label_score_enemy->ForeColor = System::Drawing::Color::Red;
				}
				if (num_your_free_card_space_enemy == 4) {
					pictureBox_enemy_card_4->Image = current_card->picture;
					score_enemy += current_card->Get_Cost();
					label_score_enemy->Text = score_enemy.ToString() + "\\21";
					if (score_enemy > 21)
						label_score_enemy->ForeColor = System::Drawing::Color::Red;
				}
				if (num_your_free_card_space_enemy == 5) {
					pictureBox_enemy_card_5->Image = current_card->picture;
					score_enemy += current_card->Get_Cost();
					label_score_enemy->Text = score_enemy.ToString() + "\\21";
					if (score_enemy > 21)
						label_score_enemy->ForeColor = System::Drawing::Color::Red;
				}
				num_your_free_card_space_enemy++;
				deck->Reshafle();
			}
			else {
				pass_enemy = 1;
				label_pass_enemy->Visible = 1;
			}
		}
		else {
			pass_enemy = 1;
			label_pass_enemy->Visible = 1;
		}
		label_cards_left->Text = "Осталось карт: " + deck->GetNumberOf_Cards().ToString();
		if (pass_enemy == 1 && pass_you == 1 && table_flag == 0) {
			table->Rows->Add(label_score_you->Text, label_score_enemy->Text);
			table_flag = 1;
		}
	}
	private: array <Bitmap^>^ pictarr = gcnew array <Bitmap^>(10);
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::PictureBox^ pictureBox11;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox_enemy_card_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_enemy_card_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_enemy_card_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_enemy_card_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_enemy_card_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_your_card_1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_take_card = (gcnew System::Windows::Forms::Button());
			this->label_pass_enemy = (gcnew System::Windows::Forms::Label());
			this->label_pass_you = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->You = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Enemy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_cards_left = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label_score_you = (gcnew System::Windows::Forms::Label());
			this->label_score_enemy = (gcnew System::Windows::Forms::Label());
			this->button_puss_you = (gcnew System::Windows::Forms::Button());
			pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox11
			// 
			pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			pictureBox11->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.InitialImage")));
			pictureBox11->Location = System::Drawing::Point(640, 304);
			pictureBox11->Name = L"pictureBox11";
			pictureBox11->Size = System::Drawing::Size(63, 99);
			pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox11->TabIndex = 19;
			pictureBox11->TabStop = false;
			// 
			// pictureBox_enemy_card_5
			// 
			this->pictureBox_enemy_card_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_enemy_card_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_5.Image")));
			this->pictureBox_enemy_card_5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_5.InitialImage")));
			this->pictureBox_enemy_card_5->Location = System::Drawing::Point(524, 12);
			this->pictureBox_enemy_card_5->Name = L"pictureBox_enemy_card_5";
			this->pictureBox_enemy_card_5->Size = System::Drawing::Size(57, 90);
			this->pictureBox_enemy_card_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_enemy_card_5->TabIndex = 10;
			this->pictureBox_enemy_card_5->TabStop = false;
			// 
			// pictureBox_enemy_card_4
			// 
			this->pictureBox_enemy_card_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_enemy_card_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_4.Image")));
			this->pictureBox_enemy_card_4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_4.InitialImage")));
			this->pictureBox_enemy_card_4->Location = System::Drawing::Point(461, 12);
			this->pictureBox_enemy_card_4->Name = L"pictureBox_enemy_card_4";
			this->pictureBox_enemy_card_4->Size = System::Drawing::Size(57, 90);
			this->pictureBox_enemy_card_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_enemy_card_4->TabIndex = 11;
			this->pictureBox_enemy_card_4->TabStop = false;
			// 
			// pictureBox_enemy_card_3
			// 
			this->pictureBox_enemy_card_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_enemy_card_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_3.Image")));
			this->pictureBox_enemy_card_3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_3.InitialImage")));
			this->pictureBox_enemy_card_3->Location = System::Drawing::Point(398, 12);
			this->pictureBox_enemy_card_3->Name = L"pictureBox_enemy_card_3";
			this->pictureBox_enemy_card_3->Size = System::Drawing::Size(57, 90);
			this->pictureBox_enemy_card_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_enemy_card_3->TabIndex = 12;
			this->pictureBox_enemy_card_3->TabStop = false;
			// 
			// pictureBox_enemy_card_2
			// 
			this->pictureBox_enemy_card_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_enemy_card_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_2.Image")));
			this->pictureBox_enemy_card_2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_2.InitialImage")));
			this->pictureBox_enemy_card_2->Location = System::Drawing::Point(335, 12);
			this->pictureBox_enemy_card_2->Name = L"pictureBox_enemy_card_2";
			this->pictureBox_enemy_card_2->Size = System::Drawing::Size(57, 90);
			this->pictureBox_enemy_card_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_enemy_card_2->TabIndex = 13;
			this->pictureBox_enemy_card_2->TabStop = false;
			// 
			// pictureBox_enemy_card_1
			// 
			this->pictureBox_enemy_card_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_enemy_card_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_1.Image")));
			this->pictureBox_enemy_card_1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_enemy_card_1.InitialImage")));
			this->pictureBox_enemy_card_1->Location = System::Drawing::Point(272, 12);
			this->pictureBox_enemy_card_1->Name = L"pictureBox_enemy_card_1";
			this->pictureBox_enemy_card_1->Size = System::Drawing::Size(57, 90);
			this->pictureBox_enemy_card_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_enemy_card_1->TabIndex = 14;
			this->pictureBox_enemy_card_1->TabStop = false;
			// 
			// pictureBox_your_card_5
			// 
			this->pictureBox_your_card_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_5.Image")));
			this->pictureBox_your_card_5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_5.InitialImage")));
			this->pictureBox_your_card_5->Location = System::Drawing::Point(524, 498);
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
			this->pictureBox_your_card_2->Location = System::Drawing::Point(335, 498);
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
			this->pictureBox_your_card_3->Location = System::Drawing::Point(398, 498);
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
			this->pictureBox_your_card_4->Location = System::Drawing::Point(461, 498);
			this->pictureBox_your_card_4->Name = L"pictureBox_your_card_4";
			this->pictureBox_your_card_4->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_4->TabIndex = 9;
			this->pictureBox_your_card_4->TabStop = false;
			// 
			// pictureBox_your_card_1
			// 
			this->pictureBox_your_card_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_your_card_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_1.Image")));
			this->pictureBox_your_card_1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_your_card_1.InitialImage")));
			this->pictureBox_your_card_1->Location = System::Drawing::Point(272, 498);
			this->pictureBox_your_card_1->Name = L"pictureBox_your_card_1";
			this->pictureBox_your_card_1->Size = System::Drawing::Size(57, 90);
			this->pictureBox_your_card_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_your_card_1->TabIndex = 6;
			this->pictureBox_your_card_1->TabStop = false;
			// 
			// button_take_card
			// 
			this->button_take_card->Enabled = false;
			this->button_take_card->Location = System::Drawing::Point(640, 511);
			this->button_take_card->Name = L"button_take_card";
			this->button_take_card->Size = System::Drawing::Size(104, 44);
			this->button_take_card->TabIndex = 5;
			this->button_take_card->Text = L"Взять карту";
			this->button_take_card->UseVisualStyleBackColor = true;
			this->button_take_card->Click += gcnew System::EventHandler(this, &MainForm::button_take_card_Click);
			// 
			// label_pass_enemy
			// 
			this->label_pass_enemy->AutoSize = true;
			this->label_pass_enemy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_pass_enemy->Location = System::Drawing::Point(407, 136);
			this->label_pass_enemy->Name = L"label_pass_enemy";
			this->label_pass_enemy->Size = System::Drawing::Size(61, 29);
			this->label_pass_enemy->TabIndex = 15;
			this->label_pass_enemy->Text = L"Пас!";
			this->label_pass_enemy->Visible = false;
			// 
			// label_pass_you
			// 
			this->label_pass_you->AutoSize = true;
			this->label_pass_you->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_pass_you->Location = System::Drawing::Point(407, 444);
			this->label_pass_you->Name = L"label_pass_you";
			this->label_pass_you->Size = System::Drawing::Size(61, 29);
			this->label_pass_you->TabIndex = 16;
			this->label_pass_you->Text = L"Пас!";
			this->label_pass_you->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Счёт";
			this->label3->Visible = false;
			// 
			// table
			// 
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->You, this->Enemy });
			this->table->Location = System::Drawing::Point(12, 41);
			this->table->Name = L"table";
			this->table->RowHeadersVisible = false;
			this->table->Size = System::Drawing::Size(205, 547);
			this->table->TabIndex = 18;
			// 
			// You
			// 
			this->You->HeaderText = L"Вы";
			this->You->Name = L"You";
			this->You->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Enemy
			// 
			this->Enemy->HeaderText = L"Соперник";
			this->Enemy->Name = L"Enemy";
			this->Enemy->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// label_cards_left
			// 
			this->label_cards_left->AutoSize = true;
			this->label_cards_left->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cards_left->Location = System::Drawing::Point(541, 257);
			this->label_cards_left->Name = L"label_cards_left";
			this->label_cards_left->Size = System::Drawing::Size(192, 29);
			this->label_cards_left->TabIndex = 20;
			this->label_cards_left->Text = L"Осталось карт: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(640, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 36);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Обновить колоду";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label_score_you
			// 
			this->label_score_you->AutoSize = true;
			this->label_score_you->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_score_you->Location = System::Drawing::Point(397, 349);
			this->label_score_you->Name = L"label_score_you";
			this->label_score_you->Size = System::Drawing::Size(71, 33);
			this->label_score_you->TabIndex = 22;
			this->label_score_you->Text = L"0/21";
			// 
			// label_score_enemy
			// 
			this->label_score_enemy->AutoSize = true;
			this->label_score_enemy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_score_enemy->Location = System::Drawing::Point(397, 200);
			this->label_score_enemy->Name = L"label_score_enemy";
			this->label_score_enemy->Size = System::Drawing::Size(71, 33);
			this->label_score_enemy->TabIndex = 23;
			this->label_score_enemy->Text = L"0/21";
			// 
			// button_puss_you
			// 
			this->button_puss_you->Enabled = false;
			this->button_puss_you->Location = System::Drawing::Point(640, 464);
			this->button_puss_you->Name = L"button_puss_you";
			this->button_puss_you->Size = System::Drawing::Size(104, 41);
			this->button_puss_you->TabIndex = 24;
			this->button_puss_you->Text = L"Спасовать";
			this->button_puss_you->UseVisualStyleBackColor = true;
			this->button_puss_you->Click += gcnew System::EventHandler(this, &MainForm::button_puss_you_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 600);
			this->Controls->Add(this->button_puss_you);
			this->Controls->Add(this->label_score_enemy);
			this->Controls->Add(this->label_score_you);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label_cards_left);
			this->Controls->Add(pictureBox11);
			this->Controls->Add(this->table);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label_pass_you);
			this->Controls->Add(this->label_pass_enemy);
			this->Controls->Add(this->pictureBox_enemy_card_1);
			this->Controls->Add(this->pictureBox_enemy_card_2);
			this->Controls->Add(this->pictureBox_enemy_card_3);
			this->Controls->Add(this->pictureBox_enemy_card_4);
			this->Controls->Add(this->pictureBox_enemy_card_5);
			this->Controls->Add(this->pictureBox_your_card_4);
			this->Controls->Add(this->pictureBox_your_card_3);
			this->Controls->Add(this->pictureBox_your_card_2);
			this->Controls->Add(this->pictureBox_your_card_1);
			this->Controls->Add(this->button_take_card);
			this->Controls->Add(this->pictureBox_your_card_5);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_enemy_card_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_your_card_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	delete this->deck;
	this->deck = gcnew Deck();
	for (size_t i = 0; i < 10; i++)
	{
		this->deck->AddCard(i+1,i, pictarr[i]);
	}
	this->deck->Reshafle();

	pictureBox_enemy_card_1->Image = pictarr[10];
	pictureBox_enemy_card_2->Image = pictarr[10];
	pictureBox_enemy_card_3->Image = pictarr[10];
	pictureBox_enemy_card_4->Image = pictarr[10];
	pictureBox_enemy_card_5->Image = pictarr[10];
	pictureBox_your_card_1->Image = pictarr[10];
	pictureBox_your_card_2->Image = pictarr[10];
	pictureBox_your_card_3->Image = pictarr[10];
	pictureBox_your_card_4->Image = pictarr[10];
	pictureBox_your_card_5->Image = pictarr[10];
	label_pass_enemy->Hide();
	label_pass_you->Hide();
	label_score_enemy->Text = "0/21";
	label_score_you->Text = "0/21";

	num_your_free_card_space_you = 1;
	num_your_free_card_space_enemy = 1;
	score_enemy = 0;
	score_you = 0;
	pass_you = 0;
	pass_enemy = 0;

	button_puss_you->Enabled = 1;
	button_take_card->Enabled = 1;

	label_score_you->ForeColor = System::Drawing::Color::Black;
	label_score_enemy->ForeColor = System::Drawing::Color::Black;

	label_cards_left->Text = "Осталось карт: " + deck->GetNumberOf_Cards().ToString();
	table_flag = 0;
}
private: System::Void button_take_card_Click(System::Object^ sender, System::EventArgs^ e) {
	if (num_your_free_card_space_you < 6) {
		Card^ current_card;
		current_card = this->deck->GetUpperCard();
		if (num_your_free_card_space_you == 1) {
			pictureBox_your_card_1->Image = current_card->picture;
			score_you += current_card->Get_Cost();
			label_score_you->Text = score_you.ToString() + "\\21";
			if (score_you > 21)
				label_score_you->ForeColor = System::Drawing::Color::Red;
		}
		if (num_your_free_card_space_you == 2) {
			pictureBox_your_card_2->Image = current_card->picture;
			score_you += current_card->Get_Cost();
			label_score_you->Text = score_you.ToString() + "\\21";
			if (score_you > 21)
				label_score_you->ForeColor = System::Drawing::Color::Red;
		}
		if (num_your_free_card_space_you == 3) {
			pictureBox_your_card_3->Image = current_card->picture;
			score_you += current_card->Get_Cost();
			label_score_you->Text = score_you.ToString() + "\\21";
			if (score_you > 21)
				label_score_you->ForeColor = System::Drawing::Color::Red;
		}
		if (num_your_free_card_space_you == 4) {
			pictureBox_your_card_4->Image = current_card->picture;
			score_you += current_card->Get_Cost();
			label_score_you->Text = score_you.ToString() + "\\21";
			if (score_you > 21)
				label_score_you->ForeColor = System::Drawing::Color::Red;
		}
		if (num_your_free_card_space_you == 5) {
			pictureBox_your_card_5->Image = current_card->picture;
			score_you += current_card->Get_Cost();
			label_score_you->Text = score_you.ToString() + "\\21";
			if (score_you > 21)
				label_score_you->ForeColor = System::Drawing::Color::Red;
		}
		num_your_free_card_space_you++;
	deck->Reshafle();
	
	label_cards_left->Text = "Осталось карт: "+deck->GetNumberOf_Cards().ToString();
	// Enemy turn started
	if(pass_enemy==0)
	Enemy_Taking_turn();
	}
}
private: System::Void button_puss_you_Click(System::Object^ sender, System::EventArgs^ e) {
	pass_you = 1;
	label_pass_you->Visible = 1;
	while (pass_enemy != 1 && num_your_free_card_space_enemy != 6) {
		Enemy_Taking_turn();
	}
	label_pass_enemy->Visible = 1;
	button_puss_you->Enabled = 0;
	button_take_card->Enabled = 0;
	if (pass_enemy == 1 && pass_you == 1&& table_flag==0) {
		table->Rows->Add(label_score_you->Text, label_score_enemy->Text);
		table_flag = 1;
	}
}
};
}
