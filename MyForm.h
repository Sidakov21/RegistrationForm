#pragma once
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include <set>

using namespace std;

namespace Формарегистрации {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int c = 0;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;






	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;










	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(311, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Регистрация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(250, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(370, 48);
			this->label2->TabIndex = 1;
			this->label2->Text = L"для завершении регистрации необходимо\nподтвердить е-mail и номер телефона";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L" Имя*";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Фамилия*";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 336);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L" Дата рождения*";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 390);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L" Пол*";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 486);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(208, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L" *--- поля обязательное для заполнения";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(327, 276);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L" Телефон*";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(327, 206);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L" E-mail*";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(327, 331);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L" Город*";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(651, 279);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L" Повторите пароль*";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(651, 210);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L" Пароль*";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(651, 336);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 13);
			this->label16->TabIndex = 15;
			this->label16->Text = L" Я согласен(а):*";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(654, 355);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(124, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"С условиями акции";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(654, 393);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(208, 30);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"С пользовательским соглашением,\n на получение е-mail рассылки";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(654, 435);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(205, 17);
			this->checkBox3->TabIndex = 18;
			this->checkBox3->Text = L"Я уже пользуюсь \"Яндекс.  Такси\"";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(37, 411);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(51, 17);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Жен.";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(108, 411);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(50, 17);
			this->radioButton2->TabIndex = 20;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Муж.";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 226);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 21;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(32, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(329, 224);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 20);
			this->textBox3->TabIndex = 24;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(330, 294);
			this->maskedTextBox1->Mask = L"+7 (999) 000-0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(121, 20);
			this->maskedTextBox1->TabIndex = 26;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(32, 356);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(139, 20);
			this->dateTimePicker1->TabIndex = 33;
			this->dateTimePicker1->Value = System::DateTime(2006, 11, 1, 0, 0, 0, 0);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Воронеж ", L"Краснодар ", L"Москва ", L"Санкт-Петербург ",
					L"Черкесск ", L"Ярославль "
			});
			this->comboBox2->Location = System::Drawing::Point(330, 358);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 34;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Info;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Воронежская облать", L"Краснодарский край", L"Московская область",
					L"Карачаево-Черкесская Республика", L"Ленинградская область", L"Ярославская область"
			});
			this->comboBox1->Location = System::Drawing::Point(330, 423);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(327, 404);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 35;
			this->label10->Text = L" Регион*";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(654, 231);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox2->TabIndex = 0;
			this->maskedTextBox2->UseSystemPasswordChar = true;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox2_MaskInputRejected);
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(654, 295);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox3->TabIndex = 37;
			this->maskedTextBox3->UseSystemPasswordChar = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(760, 295);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(77, 17);
			this->checkBox4->TabIndex = 42;
			this->checkBox4->Text = L"Просмотр";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(760, 233);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(77, 17);
			this->checkBox5->TabIndex = 43;
			this->checkBox5->Text = L"Просмотр";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(778, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 39);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Проверить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 45;
			this->label7->Text = L"label7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1012, 557);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: std::string SystemStringToStdString(System::String^ str)
	{
		return msclr::interop::marshal_as<std::string>(str);
	}
	private: System::String^ StdStringToSystemString(const std::string& str)
	{
		return  msclr::interop::marshal_as<System::String^>(str);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->maskedTextBox1->UseSystemPasswordChar = false;
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox5->Checked)
	{
		this->maskedTextBox2->UseSystemPasswordChar = false;
	}
	else this->maskedTextBox2->UseSystemPasswordChar = true;
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox4->Checked)
	{
		this->maskedTextBox3->UseSystemPasswordChar = false;
	}
	else this->maskedTextBox3->UseSystemPasswordChar = true;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	bool save = false;
	string pol = "";
	string sogl = "";
	string textInFile = "";
	string fileInText = "";

	

	if (this->textBox1->Text == "")
	{
		this->label3->Text += L" Обязательно для заполнения!";
		save = false;
	}
	else {
		this->label3->Text = L"Имя*";
		save = true;
	}




	if (this->textBox2->Text == "")
	{
		this->label4->Text += L" Обязательно для заполнения!";
		save = false;
	}
	else {
		this->label4->Text = L"Фамилия*";
		save = true;
	}



	if (this->radioButton1->Checked == false && this->radioButton2->Checked == false)
	{
		this->label6->Text += L" Выберете пол!";
		save = false;
	}
	else {
		this->label6->Text = L"Пол*";
		save = true;

		if (radioButton1->Checked)
		{
			pol += "Жен";
		}
		else pol += "Муж";
	}



	if (this->textBox3->Text == "")
	{
		this->label12->Text += L" Обязательно для заполнения!";
		save = false;
	}
	else
	{
		string str = SystemStringToStdString(this->textBox3->Text);
		bool f = false;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '@') {
				f = true;
				break;
			}	
		}
		if (f == true)
		{
			this->label12->Text = L"E-mail*";
			if (str[str.size() - 3] != '.' && str[str.length() - 4] != '.')
			{
				this->label12->Text += L"Некорректно заполнено поле.";
				save = false;
			}
			save = true;
		}
		else {
			this->label12->Text += L"Некорректно заполнено поле";
			save = false;
		}
	}




	string str = SystemStringToStdString(this->maskedTextBox1->Text);
	bool f = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '_') {
			f = true;
			break;
		}
	}
	if (f == true)
	{
		this->label11->Text += L" Обязательно для заполнения!";
		save = false;
	}
	else {
		this->label11->Text = L"Телефон*";
		save = true;
	}


	
	if (this->comboBox2->Text == "")
	{
		this->label13->Text += L" Обязательно для заполнения!";
		save = false;
	}
	else {
		this->label13->Text = L"Город*";
		save = true;
	}

	if (this->comboBox1->Text == "")
	{
		this->label10->Text += L" Обязательно для заполнения!";
		save = false;
	}
	else
	{
		this->label10->Text = L"Регион*";
		save = true;
	}



	if (this->maskedTextBox2->Text == "")
	{
		this->label15->Text += L" Обязательно для заполнения!";
		save = false;
	}

	else if(this->maskedTextBox2->Text != this->maskedTextBox3->Text)
	{
		this->label15->Text += L" Пароли не совпадают!";
		save = false;
	}

	else {
		this->label15->Text = L"Пароль*";
		save = true;
	}



	if (this->checkBox1->Checked == false && this->checkBox2->Checked == false && this->checkBox3->Checked == false)
	{
		this->label16->Text += L" Выберете один!";
		save = false;
	}
	else
	{
		this->label16->Text = L"Я согласен(а)*";
		save = true;
		if (this->checkBox1->Checked)
		{
			sogl += " с условиями акции";
		}
		if (this->checkBox2->Checked)
		{
			sogl += "С пользовательским соглашением, на получение е - mail рассылки";
		}
		if (this->checkBox3->Checked) sogl += "Я уже пользуюсь Яндекс Такси";
	}


	if (save)
	{
		button1->Text = "Все ок!";
		ifstream in;
		ofstream out;
		out.open("Данные.txt", fstream::app); //Поток для добавления записи

		if (out.is_open())
		{
			textInFile += SystemStringToStdString(this->textBox1->Text)
				+ SystemStringToStdString(this->textBox2->Text)
				+ SystemStringToStdString(this->dateTimePicker1->Text)
				+ pol
				+ SystemStringToStdString(this->textBox3->Text)
				+ SystemStringToStdString(this->maskedTextBox1->Text)
				+ SystemStringToStdString(this->comboBox2->Text)
				+ SystemStringToStdString(this->comboBox1->Text)
				+ sogl + "\n";

			in.open("Данные.txt");
			string stroka;
			
			while (getline(in, stroka))
			{
				fileInText = stroka + "\n";
			}


			
	/*		if (textInFile.compare(fileInText) == 0)
			{
				MessageBox::Show(L"Такая запись уже существует!");
				MessageBoxButtons::OK;
				MessageBoxIcon::Information;
			}
			else
			{
				out << textInFile;
			}*/
			
		}



		out.close();
		save = false;

		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->dateTimePicker1->Text = "";
		this->radioButton1->Checked = false;
		this->radioButton2->Checked = false;
		this->textBox3->Text = "";
		this->maskedTextBox1->Text = "";
		this->comboBox1->Text = "";
		this->comboBox2->Text = "";
		this->checkBox1->Checked = false;
		this->checkBox2->Checked = false;
		this->checkBox2->Checked = false;
		this->maskedTextBox2->Text = "";
		this->maskedTextBox3->Text = "";

		button1->Text = "Проверить!";
	}
	else
	{
		button1->Text = "Проверить!";
	}

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
