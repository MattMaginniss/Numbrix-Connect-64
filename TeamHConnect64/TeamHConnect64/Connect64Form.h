#pragma once

namespace Connect64 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Connect64Form : public System::Windows::Forms::Form
	{
		public:
		Connect64Form(void);


		protected:
		~Connect64Form();

		private: ResourceManager^ resourceManager;
		private: System::Windows::Forms::ComboBox^ NumbersCombo;
		private: System::Windows::Forms::Label^ Numberlbl;


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
		void InitializeComponent(void);
};
}

