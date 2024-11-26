#pragma once

namespace Graphik
{
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;
    using namespace System::ComponentModel;
    using namespace System::Data;
    using namespace System::Text;


    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }
    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
        System::Windows::Forms::SplitContainer^ splitContainer1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::TextBox^ textBox4;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::ComponentModel::IContainer^ components = nullptr;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
            this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
            this->splitContainer1->Panel1->SuspendLayout();
            this->splitContainer1->Panel2->SuspendLayout();
            this->splitContainer1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // splitContainer1
            // 
            this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->splitContainer1->Location = System::Drawing::Point(0, 0);
            this->splitContainer1->Name = L"splitContainer1";
            this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
            // 
            // splitContainer1.Panel1
            // 
            this->splitContainer1->Panel1->Controls->Add(this->panel1);
            // 
            // splitContainer1.Panel2
            // 
            this->splitContainer1->Panel2->Controls->Add(this->panel2);
            this->splitContainer1->Size = System::Drawing::Size(772, 704);
            this->splitContainer1->SplitterDistance = 139;
            this->splitContainer1->SplitterWidth = 5;
            this->splitContainer1->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Lavender;
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->textBox4);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(772, 139);
            this->panel1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::Color::Lavender;
            this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->label1->Location = System::Drawing::Point(12, 24);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(181, 24);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Початкове значення X:";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::Lavender;
            this->textBox1->Location = System::Drawing::Point(32, 52);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(124, 27);
            this->textBox1->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->BackColor = System::Drawing::Color::Lavender;
            this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(12, 82);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(163, 23);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Кінцеве значення X:";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::Lavender;
            this->textBox2->Location = System::Drawing::Point(32, 108);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(124, 27);
            this->textBox2->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->BackColor = System::Drawing::Color::Lavender;
            this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(250, 21);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(171, 27);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Кількість точок Ne :";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::Lavender;
            this->textBox3->Location = System::Drawing::Point(270, 52);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(124, 27);
            this->textBox3->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->BackColor = System::Drawing::Color::Lavender;
            this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(200, 79);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(273, 29);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Кількість точок для графіка Ngr :";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::Lavender;
            this->textBox4->Location = System::Drawing::Point(270, 108);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(124, 27);
            this->textBox4->TabIndex = 7;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Thistle;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(520, 34);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(190, 71);
            this->button1->TabIndex = 8;
            this->button1->Text = L"Побудувати графік";
            this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
            this->button1->UseMnemonic = false;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Lavender;
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(772, 560);
            this->panel2->TabIndex = 0;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::GhostWhite;
            this->ClientSize = System::Drawing::Size(772, 704);
            this->Controls->Add(this->splitContainer1);
            this->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"Form1";
            this->Text = L"Графік функції";
            this->splitContainer1->Panel1->ResumeLayout(false);
            this->splitContainer1->Panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
            this->splitContainer1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
        array<double>^ xe = gcnew array<double>(800);
        array<double>^ ye = gcnew array<double>(800);
        array<double>^ XG = gcnew array<double>(800);
        array<double>^ YG = gcnew array<double>(800);
        array<double>^ a = gcnew array<double>(800);
        array<double>^ b = gcnew array<double>(800);
        array<double>^ c = gcnew array<double>(800);
        array<double>^ d = gcnew array<double>(800);
        array<double>^ H = gcnew array<double>(800);
        array<double>^ Y = gcnew array<double>(800);
        array<double, 2>^ Ma = gcnew array<double, 2>(800, 800);
        int Ne;
        int Ngr;
        int krokx, kroky, i, mx, my, x1, x2, y1, y2, gx0, gy0;
        double maxx, minx, maxy, miny, kx, ky, zx, zy, gx, gy, kgzx, kgzy, cx, cy;
        double maxyg, minyg;
        double pidpys;
        double L, hor, vert;
        String^ str;

        double f(double x)
        {
            return 1.0 / (1.0 + 25 * x * x);
        }
        void Progonka(array<array<double>^>^ A, array<double>^ b, int N, array<double>^% x)
        {
            array<double>^ Alp = gcnew array<double>(N);
            array<double>^ Bet = gcnew array<double>(N);
            double R;

            Alp[0] = -A[0][1] / A[0][0];
            Bet[0] = b[0] / A[0][0];

            for (int i = 1; i < N - 1; i++)
            {
                R = A[i][i] + Alp[i - 1] * A[i][i - 1];
                Alp[i] = -A[i][i + 1] / R;
                Bet[i] = (b[i] - A[i][i - 1] * Bet[i - 1]) / R;
            }

            R = A[N - 1][N - 1] + Alp[N - 2] * A[N - 1][N - 2];
            x[N - 1] = (b[N - 1] - A[N - 1][N - 2] * Bet[N - 2]) / R;

            for (int i = N - 2; i >= 0; i--)
            {
                x[i] = Alp[i] * x[i + 1] + Bet[i];
            }
        }
        void CubSpln(cli::array<double>^ xe, cli::array<double>^ ye, int Ne, cli::array<double>^ a, cli::array<double>^ b, cli::array<double>^ c, cli::array<double>^ d)
        {
            array<double>^ H = gcnew array<double>(Ne);
            array<double>^ Y = gcnew array<double>(Ne);
            array<array<double>^>^ Ma = gcnew array<array<double>^>(Ne);
            for (int i = 0; i < Ne; i++) {
                Ma[i] = gcnew array<double>(Ne);
            }
            double R, Q;
            Ne = Ne - 1;  

            for (int i = 1; i < Ne + 1; i++) {
                H[i] = xe[i] - xe[i - 1];
                a[i] = ye[i];
            }

            for (int i = 1; i < Ne; i++) { 
                for (int j = 1; j < Ne; j++) { 
                    if (i == j) {
                        R = H[i]; 
                        Q = H[i + 1]; 
                        Ma[i][i] = 2 * (R + Q); 
                        Y[i] = 6 * ((ye[i + 1] - ye[i]) / Q - (ye[i] - ye[i - 1]) / R); 
                    }
                    else {
                        Q = H[i + 1]; 
                        Ma[j][i] = 0; 
                        Ma[i + 1][i] = Q; 
                        Ma[i][i + 1] = Q;
                    }
                }
            }

            Progonka(Ma, Y, Ne - 1, c);
            c[0] = 0;
            c[Ne] = 0;
            for (int i = 1; i < Ne; i++) { 
                R = H[i];
                d[i] = (c[i] - c[i - 1]) / R;
                b[i] = (R * c[i]) / 2 - (R * R * d[i]) / 6 + (ye[i] - ye[i - 1]) / R;
            }
        }

        void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double al, bl, h;
            int i;
            al = Convert::ToDouble(textBox1->Text);
            bl = Convert::ToDouble(textBox2->Text);
            Ne = Convert::ToInt32(textBox3->Text);
            Ngr = Convert::ToInt32(textBox4->Text);
            h = (bl - al) / (Ne - 1);
            xe[0] = al;
            for (i = 0; i < Ne; i++)
            {
                ye[i] = f(xe[i]);
                xe[i + 1] = xe[i] + h;
            }
            CubSpln(xe, ye, Ne, a, b, c, d);
            int L = 1;
            h = (bl - al) / Ngr;
            XG[0] = al;
            for (i = 0; i < Ngr; i++)
            {
                YG[i] = a[L] + b[L] * (XG[i] - xe[L]) + c[L] * ((XG[i] - xe[L]) * (XG[i] - xe[L])) / 2 + d[L] * ((XG[i] - xe[L]) * (XG[i] - xe[L]) * (XG[i] - xe[L])) / 6;
                XG[i + 1] = XG[i] + h;
                if (XG[i] > xe[L]) L = L + 1;
            }
            Form1^ Gr = gcnew Form1();
            Graphics^ g = panel2->CreateGraphics();
            g->Clear(Color::White);
            Gr->ModelGrafik(xe, ye, Ne, XG, YG, Ngr, g);
            this->Invalidate();
            delete g;
        }

        double getmaxy(array<double>^ y)
        {
            int n_mas = y->GetUpperBound(0);	
            double rez = y[0];
            for (i = 0; i < n_mas; i++)
                if (y[i] > rez) rez = y[i];
            return rez;
        }

        double getminy(array<double>^ y)
        {
            int n_mas = y->GetUpperBound(0);	
            double rez = y[0];
            for (i = 0; i < n_mas; i++)
                if (y[i] < rez) rez = y[i];
            return rez;
        }

        void ModelGrafik(array<double>^ xe, array<double>^ ye, int Ne, array<double>^ xg, array<double>^ yg, int Ngr, Graphics^ g)
        {
            double maxx = xe[Ne - 1];
            double minx = xe[0];
            double maxy = getmaxy(ye);
            double miny = getminy(ye);
            double maxyg = getmaxy(yg);
            double minyg = getminy(yg);

            if (maxyg > maxy) maxy = maxyg;
            if (minyg < miny) miny = minyg;

            int L = 50;
            short i, vert, hor;
            double pidpys;
            String^ str;
            Pen^ penBlack = gcnew Pen(Color::Black, 2.0f);
            Pen^ penPurple = gcnew Pen(Color::MediumPurple, 1.8f);
            Pen^ penViolet = gcnew Pen(Color::DarkViolet, 3.0f);
            Pen^ penCrimson = gcnew Pen(Color::Crimson);
            SolidBrush^ textBrush = gcnew SolidBrush(Color::Black);
            System::Drawing::Font^ textFont = gcnew System::Drawing::Font("Segoe UI", 8);

            int mx = 700, my = 450;
            g->Clear(Color::White);

            double kx = (mx - 2 * L) / (maxx - minx);
            double ky = (my - 2 * L) / (miny - maxy);
            double zx = (mx * minx - L * (minx + maxx)) / (minx - maxx);
            double zy = (my * maxy - L * (miny + maxy)) / (maxy - miny);

            double gx = 0, gy = 0;
            if (minx * maxx <= 0) gx = 0;
            else if ((minx * maxx > 0) && (minx > 0)) gx = minx;
            else if ((minx * maxx > 0) && (minx < 0)) gx = maxx;

            if (miny * maxy <= 0) gy = 0;
            else if ((miny * maxy > 0) && (miny > 0)) gy = miny;
            else if ((miny * maxy > 0) && (miny < 0)) gy = maxy;

            double kgzx = kx * gx + zx;
            double kgzy = ky * gy + zy;

            double gx0 = static_cast<int>(kgzx);
            double gy0 = static_cast<int>(kgzy);

            double krokx = static_cast<double>(mx - 2 * L) / 10;
            double kroky = static_cast<double>(my - 2 * L) / 10;

            double cx, cy;

            if (minx * maxx < 0) {
                cx = (minx < 0 ? -minx : minx) * krokx / (gx0 - L);
            }
            else {
                cx = ((maxx - minx) < 0 ? -(maxx - minx) : (maxx - minx)) * krokx / (mx - 2 * L);
            }

            if (miny * maxy < 0) {
                cy = (maxy < 0 ? -maxy : maxy) * kroky / (gy0 - L);
            }
            else {
                cy = ((maxy - miny) < 0 ? -(maxy - miny) : (maxy - miny)) * kroky / (my - 2 * L);
            }

            vert = 0;
            while ((gx0 + vert * krokx) < (mx - L))
            {
                g->DrawLine(penPurple, static_cast<int>(gx0 + vert * krokx), static_cast<int>(L), static_cast<int>(gx0 + vert * krokx), static_cast<int>(my - L));
                if ((gx0 + vert * krokx) < (mx - L - 10))
                    g->DrawLine(penCrimson, static_cast<int>(gx0 + vert * krokx), static_cast<int>(gy0 - 5), static_cast<int>(gx0 + vert * krokx), static_cast<int>(gy0 + 5));
                vert++;
            }
            for (i = 0; i < vert; i++)
            {
                if (minx * maxx < 0)
                {
                    pidpys = 0 + i * cx;
                    str = pidpys.ToString("F2");
                }
                else
                {
                    pidpys = minx + i * cx;
                    str = pidpys.ToString("F2");
                }
                g->DrawString(str, textFont, textBrush, static_cast<float>(gx0 + i * krokx), static_cast<float>(gy0 + 10));
            }
            vert = 0;
            while ((gx0 - vert * krokx) > L)
            {
                g->DrawLine(penPurple, static_cast<int>(gx0 - vert * krokx), static_cast<int>(L), static_cast<int>(gx0 - vert * krokx), static_cast<int>(my - L));
                g->DrawLine(penCrimson, static_cast<int>(gx0 - vert * krokx), static_cast<int>(gy0 - 5), static_cast<int>(gx0 - vert * krokx), static_cast<int>(gy0 + 5));
                vert++;
            }
            for (i = 0; i < vert; i++)
            {
                if (minx * maxx < 0)
                {
                    pidpys = 0 - i * cx;
                    str = pidpys.ToString("F2");
                }
                else
                {
                    pidpys = maxx - i * cx;
                    str = pidpys.ToString("F2");
                }
                g->DrawString(str, textFont, textBrush, static_cast<float>(gx0 - i * krokx), static_cast<float>(gy0 + 10));
            }
            hor = 0;
            while ((gy0 - hor * kroky) > L)
            {
                g->DrawLine(penPurple, static_cast<int>(L), static_cast<int>(gy0 - hor * kroky), static_cast<int>(mx - L), static_cast<int>(gy0 - hor * kroky));
                if ((gy0 - hor * kroky) > (L + 10))
                    g->DrawLine(penCrimson, static_cast<int>(gx0 - 5), static_cast<int>(gy0 - hor * kroky), static_cast<int>(gx0 + 5), static_cast<int>(gy0 - hor * kroky));
                hor++;
            }
            for (i = 0; i < hor; i++)
            {
                if (miny * maxy < 0)
                {
                    pidpys = 0 + i * cy;
                    str = pidpys.ToString("F2");
                }
                else
                {
                    pidpys = miny + i * cy;
                    str = pidpys.ToString("F2");
                }
                g->DrawString(str, textFont, textBrush, static_cast<float>(gx0 - 35), static_cast<float>(gy0 - i * kroky));
            }
            hor = 0;
            while ((gy0 + hor * kroky) < (my - L))
            {
                g->DrawLine(penPurple, static_cast<int>(L), static_cast<int>(gy0 + hor * kroky), static_cast<int>(mx - L), static_cast<int>(gy0 + hor * kroky));
                g->DrawLine(penCrimson, static_cast<int>(gx0 - 5), static_cast<int>(gy0 + hor * kroky), static_cast<int>(gx0 + 5), static_cast<int>(gy0 + hor * kroky));
                hor++;
            }
            for (i = 0; i < hor; i++)
            {
                if (miny * maxy < 0)
                {
                    pidpys = 0 - i * cy;
                    str = pidpys.ToString("F2");
                }
                else
                {
                    pidpys = maxy - i * cy;
                    str = pidpys.ToString("F2");
                }
                g->DrawString(str, textFont, textBrush, static_cast<float>(gx0 - 35), static_cast<float>(gy0 + i * kroky));
            }

            g->DrawRectangle(penPurple, L, L, mx - 2 * L, my - 2 * L);
            g->DrawString("x", textFont, textBrush, (float)(mx - L / 2 - 20), (float)(Convert::ToInt32(kgzy) - 15));
            g->DrawString("f(x)", textFont, textBrush, (float)Convert::ToInt32(kgzx), (float)(L - 35));
            if (minx * maxx <= 0)
                if (miny * maxy <= 0)
                    g->DrawString("0;0", textFont, textBrush, static_cast<float>(gx0), static_cast<float>(gy0 + 10));
            g->DrawLine(penBlack, Point(static_cast<int>(L), static_cast<int>(gy0)), Point(static_cast<int>(mx - L), static_cast<int>(gy0)));
            g->DrawLine(penBlack, Point(static_cast<int>(gx0), static_cast<int>(L)), Point(static_cast<int>(gx0), static_cast<int>(my - L)));
            g->DrawLine(penBlack, Point(static_cast<int>(mx - L), static_cast<int>(gy0)), Point(static_cast<int>(mx - L - 15), static_cast<int>(gy0 - 5)));
            g->DrawLine(penBlack, Point(static_cast<int>(mx - L), static_cast<int>(gy0)), Point(static_cast<int>(mx - L - 15), static_cast<int>(gy0 + 5)));
            g->DrawLine(penBlack, static_cast<int>(gx0), static_cast<int>(L), static_cast<int>(gx0 + 5), static_cast<int>(L + 15));
            g->DrawLine(penBlack, static_cast<int>(gx0), static_cast<int>(L), static_cast<int>(gx0 - 5), static_cast<int>(L + 15));
            using namespace System::Drawing::Drawing2D;  

            for (int i = 0; i < Ne; i++) {
                int x = static_cast<int>(kx * xe[i] + zx);
                int y = static_cast<int>(ky * ye[i] + zy);
                g->DrawRectangle(penViolet, x - 3, y - 3, 6, 6);
            }

            array<Point>^ points = gcnew array<Point>(Ne);
            for (int i = 0; i < Ne; i++) {
                points[i] = Point(static_cast<int>(kx * xe[i] + zx), static_cast<int>(ky * ye[i] + zy));
            }

            penPurple->Width = 2; 
            penPurple->DashStyle = DashStyle::Solid; 
            g->DrawCurve(penPurple, points); 
        }
    };
}