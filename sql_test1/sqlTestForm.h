#pragma once

#include<string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>
/*
#include "my_global.h"
#include "mysql.h" 
#include <time.h>
#define SERVER "localhost"
#define USER "root"
#define PASSWORD "ArchVile"
#define DATABASE "CEDESK" 
*/

namespace sql_test1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for sqlTestForm
	/// </summary>
	public ref class sqlTestForm : public System::Windows::Forms::Form
	{
	public:
		sqlTestForm(void)
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
		~sqlTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Import SQL data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sqlTestForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Import data";
			this->label1->Click += gcnew System::EventHandler(this, &sqlTestForm::label1_Click);
			// 
			// sqlTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 270);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"sqlTestForm";
			this->Text = L"sqlTestForm";
			this->Load += gcnew System::EventHandler(this, &sqlTestForm::sqlTestForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sqlTestForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 SqlConnection^ cn = gcnew SqlConnection();
				 SqlCommand^ cmd;
				 SqlDataAdapter^ da;
				 DataTable^ dt;

				 char ch;
				 label1->Text = "MySQL Initialization or Connection Failed!";
				 //clock_t begin, end;
				 //MYSQL *connect=mysql_init(NULL); 
				 //connect=mysql_real_connect(connect,SERVER,USER,PASSWORD,DATABASE,0,NULL,0); 
				 //if( ! connect) { label1->Text = "MySQL Initialization or Connection Failed!"; }
				 //if( ! connect) { printf("MySQL Initialization or Connection Failed!\n"); return 0; }
				 //mysql_query(connect,"insert into test values(2)");

				 //mysql_query(connect,"INSERT INTO student VALUES('111','aaaa','bbbb')");

				 /*

				 begin = clock();
				 //printf("Application SN\tMerit\tAdmission Roll\n-------------- ------- ----------------\n");
				 MYSQL_RES *res_set; MYSQL_ROW row;
				 mysql_query(connect,"SELECT * FROM database");
				 res_set = mysql_store_result(connect);  //unsigned int numrows = mysql_num_rows(res_set);
				 // while ( row = mysql_fetch_row(res_set) )
					//printf("  res  %s\t",row[0]); /* Print the row data */ 
				 //end = clock();
				 //printf("Execution Time: %f seconds\n", (double)(end - begin) / CLOCKS_PER_SEC);
				 //mysql_close(connect);  
				 //scanf("%c",&ch);
				 //getch();
				 //cin>>ch;

				 

				 //cn->ConnectionString = "Server=localhost;Databases=CEDESK;User ID=root;Pwd=ArchVile";
				 //cn->Open();     
			 }

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
