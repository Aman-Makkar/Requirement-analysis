#include "mainclass.h"

MainClass::MainClass()
{
    this->resetParameters();
    _myScheduler = new Scheduler(this->myParameters);
    this->setParameters();
    this->choices();
}

void MainClass::showMainPatameters()
{
    std::cout << "******** Simulation profile ********" << std::endl;
    //number of student
    std::cout << "Number of students:" << std::endl;
    std::cout << "MSc SETC =" << this->myParameters.nbStudentSETC << "     Budget =" << this->myParameters.amountSETC <<  std::endl;
    std::cout << "MSc Energy =" << this->myParameters.nbStudentEnergy << "      Budget =" << this->myParameters.amountEnergy <<  std::endl;
    std::cout << "Phd Aerospace =" << this->myParameters.nbStudentPhdAero << "      Budget =" << this->myParameters.amountPhdAero <<  std::endl<<std::endl;


    //Number of researcher
    std::cout << "Number of researcher:" << std::endl;
    std::cout << "Defense and security =" << this->myParameters.nbResearcherDefense << "       Budget =" << this->myParameters.amountDefense <<  std::endl;
    std::cout << "Aerospace = :" << this->myParameters.nbResearcherAero << "        Budget =" << this->myParameters.amountAeroResearch <<  std::endl;
    std::cout << "Environment = :" << this->myParameters.nbResearcherEnv << "       Budget =" << this->myParameters.amountEnv <<  std::endl;


    std::cout << "Number of IT support professionals =" << this->myParameters.nbIT << std::endl;
    std::cout << "Number of week (1 to 52) = " << this->myParameters.nbWeek << std::endl;
    std::cout << "\n";

}

void MainClass::resetParameters()
{
    myParameters = {1000,1000,1000,1000,1000,1000,1,1,1000.00,1000.00,1000.00,1000.00,1000.00,1000.00};
    this->showMainPatameters();
}

void MainClass::setParameters()
{
    char answer;
    std::string input;
    bool isException = false;
    do
    {
        std::cout << "Do you want to set new parameters ? (Y/N):" ;
        std::cin >> answer;
        if((answer=='Y') || (answer=='y'))
        {
            std::cout << "if you want to skip any parameter please press character 's' " << std::endl ;
            std::cout << "Enter number of students in SETC MSc:";
            std::cin >> input;
            if(input[0] != 's')
            {

                do{
                    try{
                        this->myParameters.nbStudentSETC = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            std::cout << "Enter the budget for SETC MSc students:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.amountSETC = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*2*/
            std::cout << "Enter number of students in MSc Energy:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbStudentEnergy = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            std::cout << "Enter the budget for students in MSc Energy:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.amountEnergy = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/2*/


            /*3*/
            std::cout << "Enter number of Phd Aerospace student:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbStudentPhdAero = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            std::cout << "Enter the budget for Phd Aerospace students:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.amountPhdAero = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/3*/


            /*4*/
            std::cout << "Number of Researcher's:\n\n";
            std::cout << "Enter number of researcher's in Defense:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbResearcherDefense = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);

            }
            std::cout << "Enter the budget for defense  researcher:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.amountDefense = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/4*/


            /*5*/
            std::cout << "Enter number of researcher in Aerospace:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbResearcherAero = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);

            }
            std::cout << "Enter the budget for Aerospace researcher:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.amountAeroResearch = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/5*/

            /*6*/
            std::cout << "Enter number of researcher in Environmental Science:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbResearcherEnv = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            std::cout << "Enter the budget for Environment Science researcher:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.amountEnv = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/6*/

            /*7*/
            std::cout << "Enter Number of IT support professionals:";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbIT = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/7*/

            /*8*/
            std::cout << "Enter number of week (1 to 52):";
            std::cin >> input;
            if(input[0] != 's')
            {
                do{
                    try{
                        this->myParameters.nbWeek = std::stoi(input) ;
                        break;
                    }
                    catch(...)
                    {
                        std::cout << "please enter a valid number!\n";
                        isException = true;
                    }
                    std::cin >> input;
                }while(isException);
            }
            /*/8*/

            std::cout << "\n";
            this->showMainPatameters();
        }
        else if ((answer == 'N') || (answer == 'n'))
        {
            this->showMainPatameters();
        }
    }while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n' );

}

void MainClass::choices()
{
    while(true)
    {
        std::cout << "please choose one of these choices:" << std::endl;
        std::cout << "1-Maximum parameters" << std::endl;
        std::cout << "2-Reset parameters" << std::endl;
       // std::cout << "3-Informations" << std::endl;
        std::cout << "3-Run Simulation" << std::endl;
        unsigned int choice;
        do
        {
            std::cout << "your choice: " ;
            std::cin >> choice;
            if(std::cin.fail())
            {
                std::cin.clear();
            }
        }while(std::cin.fail());
        std::cout << "\n" ;
        switch (choice) {
        case 1:
            this->myParameters = {5000,5000,5000,5000,5000,5000,100,53,5000.00,5000.00,5000.00,5000.00,5000.00,5000.00};
            this->showMainPatameters();
            break;
        case 2:
            this->resetParameters();
            break;
       // case 3:
           // this->showInformation();
          //  break;
        case 3:
            try
        {
            Scheduler run(myParameters);
            run.startScheduler(myParameters.nbWeek);
        }
            catch (std::exception &e)
            {
                std::cerr << e.what() << std::endl;
            }
            exit(1);//end
        default:
            break;
        }
    }

}

