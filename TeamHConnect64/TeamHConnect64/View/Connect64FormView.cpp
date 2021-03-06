#include "Connect64Form.h"

namespace view {


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void Connect64Form::InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->resetHighScoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->soundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->labelColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->cellColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->extremePuzzlesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
		this->puzzleNumberLabel = (gcnew System::Windows::Forms::Label());
		this->puzzleChoiceBox = (gcnew System::Windows::Forms::ComboBox());
		this->selectPuzzlelbl = (gcnew System::Windows::Forms::Label());
		this->loadPuzzleBtn = (gcnew System::Windows::Forms::Button());
		this->timer = (gcnew System::Windows::Forms::Timer(this->components));
		this->timeLabel = (gcnew System::Windows::Forms::Label());
		this->timerButton = (gcnew System::Windows::Forms::Button());
		this->pauseMessageLabel = (gcnew System::Windows::Forms::Label());
		this->confirmInputButton = (gcnew System::Windows::Forms::Button());
		this->scoreBoardButton = (gcnew System::Windows::Forms::Button());
		this->menuStrip1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->BeginInit();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			this->fileToolStripMenuItem,
				this->gameToolStripMenuItem, this->settingsToolStripMenuItem, this->extremePuzzlesToolStripMenuItem
		});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(607, 24);
		this->menuStrip1->TabIndex = 2;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// fileToolStripMenuItem
		// 
		this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
			this->saveToolStripMenuItem,
				this->loadToolStripMenuItem
		});
		this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
		this->fileToolStripMenuItem->Size = System::Drawing::Size(12, 20);
		// 
		// saveToolStripMenuItem
		// 
		this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
		this->saveToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::saveToolStripMenuItem_Click);
		// 
		// loadToolStripMenuItem
		// 
		this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
		this->loadToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->loadToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::loadToolStripMenuItem_Click);
		// 
		// gameToolStripMenuItem
		// 
		this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
			this->resetToolStripMenuItem,
				this->resetHighScoresToolStripMenuItem
		});
		this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
		this->gameToolStripMenuItem->Size = System::Drawing::Size(12, 20);
		// 
		// resetToolStripMenuItem
		// 
		this->resetToolStripMenuItem->Enabled = false;
		this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
		this->resetToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::resetToolStripMenuItem_Click);
		// 
		// resetHighScoresToolStripMenuItem
		// 
		this->resetHighScoresToolStripMenuItem->Name = L"resetHighScoresToolStripMenuItem";
		this->resetHighScoresToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->resetHighScoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::resetHighScoresToolStripMenuItem_Click);
		// 
		// settingsToolStripMenuItem
		// 
		this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->soundToolStripMenuItem,
				this->labelColorToolStripMenuItem, this->cellColorToolStripMenuItem
		});
		this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
		this->settingsToolStripMenuItem->Size = System::Drawing::Size(12, 20);
		// 
		// soundToolStripMenuItem
		// 
		this->soundToolStripMenuItem->Checked = true;
		this->soundToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
		this->soundToolStripMenuItem->Name = L"soundToolStripMenuItem";
		this->soundToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->soundToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::soundToolStripMenuItem_Click);
		// 
		// labelColorToolStripMenuItem
		// 
		this->labelColorToolStripMenuItem->Name = L"labelColorToolStripMenuItem";
		this->labelColorToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->labelColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::labelColorToolStripMenuItem_Click);
		// 
		// cellColorToolStripMenuItem
		// 
		this->cellColorToolStripMenuItem->Name = L"cellColorToolStripMenuItem";
		this->cellColorToolStripMenuItem->Size = System::Drawing::Size(67, 22);
		this->cellColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::cellColorToolStripMenuItem_Click);
		// 
		// extremePuzzlesToolStripMenuItem
		// 
		this->extremePuzzlesToolStripMenuItem->Name = L"extremePuzzlesToolStripMenuItem";
		this->extremePuzzlesToolStripMenuItem->Size = System::Drawing::Size(12, 20);
		this->extremePuzzlesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Connect64Form::extremePuzzlesToolStripMenuItem_Click);
		// 
		// tableLayoutPanel
		// 
		this->tableLayoutPanel->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
		this->tableLayoutPanel->ColumnCount = 8;
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			12.5F)));
		this->tableLayoutPanel->Enabled = false;
		this->tableLayoutPanel->Location = System::Drawing::Point(25, 34);
		this->tableLayoutPanel->Margin = System::Windows::Forms::Padding(25);
		this->tableLayoutPanel->Name = L"tableLayoutPanel";
		this->tableLayoutPanel->RowCount = 8;
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
		this->tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
		this->tableLayoutPanel->Size = System::Drawing::Size(425, 425);
		this->tableLayoutPanel->TabIndex = 3;
		this->tableLayoutPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Connect64Form::tableLayoutPanel_MouseDown);
		// 
		// numericUpDown
		// 
		this->numericUpDown->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->numericUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->numericUpDown->Location = System::Drawing::Point(452, 379);
		this->numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 64, 0, 0, 0 });
		this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
		this->numericUpDown->Name = L"numericUpDown";
		this->numericUpDown->Size = System::Drawing::Size(51, 35);
		this->numericUpDown->TabIndex = 4;
		this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
		this->numericUpDown->Visible = false;
		this->numericUpDown->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Connect64Form::numericUpDown_KeyDown);
		// 
		// puzzleNumberLabel
		// 
		this->puzzleNumberLabel->AutoSize = true;
		this->puzzleNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->puzzleNumberLabel->Location = System::Drawing::Point(466, 58);
		this->puzzleNumberLabel->Name = L"puzzleNumberLabel";
		this->puzzleNumberLabel->Size = System::Drawing::Size(0, 18);
		this->puzzleNumberLabel->TabIndex = 6;
		// 
		// puzzleChoiceBox
		// 
		this->puzzleChoiceBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->puzzleChoiceBox->FormattingEnabled = true;
		this->puzzleChoiceBox->Location = System::Drawing::Point(487, 214);
		this->puzzleChoiceBox->Name = L"puzzleChoiceBox";
		this->puzzleChoiceBox->Size = System::Drawing::Size(75, 21);
		this->puzzleChoiceBox->TabIndex = 7;
		// 
		// selectPuzzlelbl
		// 
		this->selectPuzzlelbl->AutoSize = true;
		this->selectPuzzlelbl->Location = System::Drawing::Point(466, 191);
		this->selectPuzzlelbl->Name = L"selectPuzzlelbl";
		this->selectPuzzlelbl->Size = System::Drawing::Size(0, 13);
		this->selectPuzzlelbl->TabIndex = 8;
		// 
		// loadPuzzleBtn
		// 
		this->loadPuzzleBtn->Location = System::Drawing::Point(487, 242);
		this->loadPuzzleBtn->Name = L"loadPuzzleBtn";
		this->loadPuzzleBtn->Size = System::Drawing::Size(75, 23);
		this->loadPuzzleBtn->TabIndex = 9;
		this->loadPuzzleBtn->UseVisualStyleBackColor = true;
		this->loadPuzzleBtn->Click += gcnew System::EventHandler(this, &Connect64Form::loadPuzzleBtn_Click);
		// 
		// timer
		// 
		this->timer->Interval = 1000;
		this->timer->Tick += gcnew System::EventHandler(this, &Connect64Form::timer_Tick);
		// 
		// timeLabel
		// 
		this->timeLabel->AutoSize = true;
		this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->timeLabel->Location = System::Drawing::Point(466, 105);
		this->timeLabel->Name = L"timeLabel";
		this->timeLabel->Size = System::Drawing::Size(0, 24);
		this->timeLabel->TabIndex = 11;
		// 
		// timerButton
		// 
		this->timerButton->Enabled = false;
		this->timerButton->Location = System::Drawing::Point(487, 136);
		this->timerButton->Name = L"timerButton";
		this->timerButton->Size = System::Drawing::Size(75, 23);
		this->timerButton->TabIndex = 12;
		this->timerButton->UseVisualStyleBackColor = true;
		this->timerButton->Click += gcnew System::EventHandler(this, &Connect64Form::timerButton_Click);
		// 
		// pauseMessageLabel
		// 
		this->pauseMessageLabel->AutoSize = true;
		this->pauseMessageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->pauseMessageLabel->Location = System::Drawing::Point(12, 232);
		this->pauseMessageLabel->Name = L"pauseMessageLabel";
		this->pauseMessageLabel->Size = System::Drawing::Size(0, 31);
		this->pauseMessageLabel->TabIndex = 13;
		this->pauseMessageLabel->Visible = false;
		// 
		// confirmInputButton
		// 
		this->confirmInputButton->Enabled = false;
		this->confirmInputButton->Location = System::Drawing::Point(487, 165);
		this->confirmInputButton->Name = L"confirmInputButton";
		this->confirmInputButton->Size = System::Drawing::Size(75, 23);
		this->confirmInputButton->TabIndex = 1;
		this->confirmInputButton->UseVisualStyleBackColor = true;
		this->confirmInputButton->Click += gcnew System::EventHandler(this, &Connect64Form::confirmInputButton_Click);
		// 
		// scoreBoardButton
		// 
		this->scoreBoardButton->Location = System::Drawing::Point(487, 307);
		this->scoreBoardButton->Name = L"scoreBoardButton";
		this->scoreBoardButton->Size = System::Drawing::Size(75, 23);
		this->scoreBoardButton->TabIndex = 14;
		this->scoreBoardButton->UseVisualStyleBackColor = true;
		this->scoreBoardButton->Click += gcnew System::EventHandler(this, &Connect64Form::scoreBoardButton_Click);
		// 
		// Connect64Form
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(607, 475);
		this->Controls->Add(this->scoreBoardButton);
		this->Controls->Add(this->pauseMessageLabel);
		this->Controls->Add(this->timerButton);
		this->Controls->Add(this->timeLabel);
		this->Controls->Add(this->loadPuzzleBtn);
		this->Controls->Add(this->selectPuzzlelbl);
		this->Controls->Add(this->puzzleChoiceBox);
		this->Controls->Add(this->puzzleNumberLabel);
		this->Controls->Add(this->confirmInputButton);
		this->Controls->Add(this->numericUpDown);
		this->Controls->Add(this->tableLayoutPanel);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->Margin = System::Windows::Forms::Padding(2);
		this->Name = L"Connect64Form";
		this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Connect64Form::Connect64Form_FormClosing);
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion

};