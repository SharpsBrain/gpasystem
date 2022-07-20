#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
double GPA=0,Total_cp= 0, GPA_of_semester;
   // All Variables Used in the Program

   double No_Of_Semester, No_Of_Subjects, Marks, Credit_hours=0, count1 = 0 ,count2 = 0;
   string Grade;
cout<<fixed<<setprecision(5);
   // Input the number of smeseter u have done
   cout<<"Enter Number of Semester(s): ";
   cin>>No_Of_Semester;

   while (No_Of_Semester>8||!cin)
   {
       cin.clear();
       cin.ignore();
       cout<<"Invalid Semesters. Enter Number of Semester(s) again: ";
       cin>>No_Of_Semester;

   }


   for (int a = 1; a<=No_Of_Semester; a++)

       //declaration of loop Variables


   {
       Total_cp=0;
       cout<<"\n\nHow many subjects have you studied in "<<" Semester "<<a<<": ";
       cin>>No_Of_Subjects;
       cout<<"enter marks in ("<<No_Of_Subjects<<")subject"<<endl;
       while(No_Of_Subjects>7||!cin)
       {
        cin.clear();
        cin.ignore();
        cout<<"Invalid Number of Subjects. Enter Number of Subjects again: ";
        cin>>No_Of_Subjects;
       }


       for (int b = 1; b<=No_Of_Subjects; b++)
       {

           cout<<endl<<"\nEnter marks of Subject "<<b<<endl;
           cout<<" or if u want to exit enter (-1): "<<endl;
           cin>>Marks;cout<<endl;


		  if (Marks == -1)
           {
               Credit_hours = 4*(b-1);
           	break;
		   }
		   else
           {
            Credit_hours = 4*No_Of_Subjects;
		   }


           if ((Marks>=90)&&(Marks<=100))
            {
               GPA = 4;
               Grade = "A";


            }
         else if ((Marks>=85)&&(Marks<90))
            {
               GPA = 3.67;
               Grade = "A";

            }
         else if ((Marks>84)&&(Marks<85))

            {
               GPA = 3.66;
               Grade = "A-";

            }
         else if ((Marks>=80)&&(Marks<84))
            {
               GPA = 3.34;
               Grade = "A-";


            }
         else if ((Marks>75)&&(Marks<80))
            {
               GPA = 3.33;
               Grade = "B+";

            }
         else if (Marks==75)
            {
               GPA = 3.01;
               Grade = "B+";

            }
         else if ((Marks>71)&&(Marks<75))
            {
               GPA = 3.00;
               Grade = "B";


            }
         else if (Marks==71)
            {
               GPA = 2.67;
               Grade = "B";

            }
         else if ((Marks>68)&&(Marks<71))
            {
               GPA = 2.66;
               Grade = "B-";


            }
         else if (Marks==68)
            {
               GPA = 2.34;
               Grade = "B-";

            }
         else if ((Marks>64)&&(Marks<68))
            {
               GPA = 2.33;
               Grade = "C+";

            }
         else if (Marks==64)
            {
               GPA = 2.01;
               Grade = "C+";

            }
         else if ((Marks>61)&&(Marks<64))
            {
               GPA = 2.00;
               Grade = "C";

            }
         else if (Marks==61)
            {
               GPA = 1.67;
               Grade = "C";

            }
         else if ((Marks>58)&&(Marks<61))
            {
               GPA = 1.66;
               Grade = "C-";

            }
         else if (Marks==58)
            {
               GPA = 1.31;
               Grade = "C-";

            }
         else if ((Marks>54)&&(Marks<58))
            {
               GPA = 1.30;
               Grade = "D+";

            }
         else if (Marks==54)
            {
               GPA = 1.01;
               Grade = "D+";

            }
         else if ((Marks>50)&&(Marks<54))
           {
               GPA = 1.00;
               Grade = "D";

           }
           else if(Marks==50)
        {
              GPA = 0.1;
               Grade = "D";

           }

         else if ((Marks>100)||(Marks<-1))
           {
               GPA = 0.1;
               Grade = "D";
               Marks=50;
           }

         else if (Marks<50)
           {
               Marks = 45;
               GPA = 0.00;
               Grade = "F";

           }

Total_cp=4*GPA+Total_cp;
        cout<<"Subject: "<<b<<"\t Marks: "<<Marks<<"\t Grade: "<<Grade<<"\t GPA: "<<GPA;

        cout<<endl;
       }




      GPA_of_semester = Total_cp/Credit_hours;//calculation of semester gpa
      if (No_Of_Semester<=4&&GPA_of_semester <2)//condition for probation and other entries
      {
          count1++;
      }
        else {count1 = 0;}
      if (No_Of_Semester<=8&&GPA_of_semester <2)
      {
          count2++;

      }
        else {count2 = 0;}

       cout<<"\nSemester Result"<<endl;
       cout<<"_________________________________________________"<<endl;
       cout<<"\nTotal Credit Hours: "<<Credit_hours<<endl;
       cout<<"\nTotal cp: "<<Total_cp<<endl;
       cout<<"\nSemester "<<a<<" GPA: "<<GPA_of_semester<<endl;



//if statement for the sake of giving a student warning of probation in the current semester
         if (count1!=2&&GPA_of_semester < 2)
        {
            cout<<"\nStudent Status"<<endl;
            cout<<"_____________________________________________"<<endl;
            cout<<"Danger!. You are in Probation!!!!"<<endl;
        }
//if statemetn for the sake of warning to a student not able to cntinue thew degree
         if (count1 == 2)
       {
           cout<<"\nStudent Status"<<endl;
           cout<<"_______________________________________________"<<endl;
           cout<<"Can't able to continue your  degree."<<endl;
           break;
       }
//if statement for the sake of informing student to rpeat the semester
       if (count2 == 2)
       {
           cout<<"\nStudent Status"<<endl;
           cout<<"_______________________________________________"<<endl;
           cout<<"Can't able to continue your degree!!!!You have to repeat your semester"<<endl;
           break;
       }



    }

cout<<endl;

    return 0;
}

