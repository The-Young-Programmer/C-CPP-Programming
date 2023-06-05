#include <iostream>
using namespace std;
int main()
{
    char str[100];
   
   
    cout<<"Enter some text or numbers and see magic:-"<<endl<<endl;
    cout<<"______________________________________"<<endl<<endl;
    cin.getline(str,100);
    cout<<str;
    cout<<"\n______________________________________"<<endl<<endl;
   
    
    for(int b=0;str[b]!='\0';b++){
        
        switch(str[b])
    {
    case 'a':
        {
        cout<<"\n    #     ";    
        cout<<"\n   # #    ";
        cout<<"\n  #####   ";
        cout<<"\n #     #  ";
        cout<<"\n#       #  ";
        cout<<"\n \n ";
        break;
        }
    
    case 'b':
        {
        cout<<"\n ######  ";
        cout<<"\n #     # ";
        cout<<"\n ######  ";
        cout<<"\n #     # ";
        cout<<"\n ######  ";
        cout<<"\n \n ";
        break;
        }
    
    case 'c':
        {
        cout<<"\n #### ";
        cout<<"\n#    ";
        cout<<"\n#    ";
        cout<<"\n#    #";
        cout<<"\n #### ";
        cout<<"\n \n  ";
        break;
        }
    case 'd':
        {
        cout<<"\n #####   ";
        cout<<"\n #    #  ";
        cout<<"\n #    #  ";
        cout<<"\n #    #  ";
        cout<<"\n #####   ";
        cout<<"\n \n ";
        break;
        }
    case 'e':
        {
        cout<<"\n ######  ";
        cout<<"\n #      ";
        cout<<"\n #####   ";
        cout<<"\n #      ";
        cout<<"\n ######  ";
        cout<<"\n \n ";
        break;
        }
    case 'f':
        {
        cout<<"\n ######  ";
        cout<<"\n #      ";
        cout<<"\n #####    ";
        cout<<"\n #      ";
        cout<<"\n #      ";
        cout<<"\n \n ";
        break;
        }
    case 'g':
        {
        cout<<"\n  ##### "; 
        cout<<"\n #      "; 
        cout<<"\n #  ### ";
        cout<<"\n #  # # ";
        cout<<"\n  ### # ";
        cout<<"\n \n ";
        break;
        }
    case 'h':
        {
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #######";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n \n ";
        break;
        }
    case 'i':
        {
        cout<<"\n ####### ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n    #    "; 
        cout<<"\n ####### "; 
        cout<<"\n \n ";
        break;
        }
    case 'j':
        {
        cout<<"\n ########";
        cout<<"\n     #   ";
        cout<<"\n     #   ";
        cout<<"\n     #   ";
        cout<<"\n #####    ";  
        cout<<"\n \n ";
        break;
        }
    case 'k':
        {
        cout<<"\n #    #  ";      
        cout<<"\n #   #   ";      
        cout<<"\n # ##    ";      
        cout<<"\n #   #   ";    
        cout<<"\n #    #  ";   
        cout<<"\n \n ";
        break;
        }
    case 'l':
        {
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n ####### ";
        cout<<"\n \n ";
        break;
        }
    case 'm':
        {
        cout<<"\n ##    ##  ";
        cout<<"\n # #  # #  ";
        cout<<"\n #  #   #  ";
        cout<<"\n #      #  ";
        cout<<"\n #      #  ";
        cout<<"\n \n ";
        break;
        }
    case 'n':
        {
        cout<<"\n #     #  ";
        cout<<"\n # #   #  ";
        cout<<"\n #  #  #  ";
        cout<<"\n #   # #  ";
        cout<<"\n #     #  ";
        cout<<"\n \n ";
        break;
        }
    case 'o':
        {
        cout<<"\n  #####   ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";
        cout<<"\n  #####  ";
        cout<<"\n \n ";
        break;
    case 'p':
        {
        cout<<"\n ######  ";
        cout<<"\n #    #  ";
        cout<<"\n #####   ";
        cout<<"\n #       "; 
        cout<<"\n #      ";
        cout<<"\n \n ";
        break;
        }
    case 'q':
        {
        cout<<"\n  #####   ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";  
        cout<<"\n #  #  #  ";
        cout<<"\n  #####  ";
        cout<<"\n       #  ";   
        cout<<"\n \n ";
        break;
    case 'r':
        {
        cout<<"\n #####   ";  
        cout<<"\n #    #  ";  
        cout<<"\n #    #  ";
        cout<<"\n # ###   ";
        cout<<"\n #    #  ";
        cout<<"\n #     # ";
        cout<<"\n \n ";
        break;
        }
    case 's':
        {
        cout<<"\n  ###### ";
        cout<<"\n #     ";
        cout<<"\n  #####  ";
        cout<<"\n       # ";
        cout<<"\n ###### ";
        cout<<"\n \n ";
        break;
        }
    case 't':
        {
        cout<<"\n ########  ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n \n ";
        break;
        }
    case 'u':
        {
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n  #####  ";
        cout<<"\n \n ";
        break;
        }
    case 'v':
        {
        cout<<"\n #       #";
        cout<<"\n  #     # ";
        cout<<"\n   #   #  "; 
        cout<<"\n    # #    ";
        cout<<"\n     #    ";
        cout<<"\n \n ";
        break;
        }
    case 'w':
        {
        cout<<"\n #         #  ";
        cout<<"\n  #   #   #   ";
        cout<<"\n   # # # #    ";
        cout<<"\n    #   #      ";
        cout<<"\n \n ";
        break;
        }
    case 'x':
        {
        cout<<"\n #     #  ";
        cout<<"\n  #   #   ";
        cout<<"\n   # #    ";
        cout<<"\n  #   #   ";
        cout<<"\n #     #  ";
        cout<<"\n \n ";
        break;
        }
    case 'y':
        {
        cout<<"\n #     # ";
        cout<<"\n  #   #  ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n \n ";
        break;
        }
    case 'z':
        {
        cout<<"\n ######  ";
        cout<<"\n     #   ";
        cout<<"\n    #    ";
        cout<<"\n  #     ";
        cout<<"\n ######  ";
        cout<<"\n \n ";
        break;
        }
    case 'A':
        {
        cout<<"\n    #     ";    
        cout<<"\n   # #    ";
        cout<<"\n  #####   ";
        cout<<"\n #     #  ";
        cout<<"\n#       #  ";
        cout<<"\n \n ";
        break;
        }
    
    case 'B':
        {
        cout<<"\n ######  ";
        cout<<"\n #     # ";
        cout<<"\n ######  ";
        cout<<"\n #     # ";
        cout<<"\n ######  ";
        cout<<"\n \n ";
        break;
        }
    
    case 'C':
        {
        cout<<"\n #### ";
        cout<<"\n#    ";
        cout<<"\n#    ";
        cout<<"\n#    #";
        cout<<"\n #### ";
        cout<<"\n \n  ";
        break;
        }
    case 'D':
        {
        cout<<"\n #####   ";
        cout<<"\n #    #  ";
        cout<<"\n #    #  ";
        cout<<"\n #    #  ";
        cout<<"\n #####   ";
        cout<<"\n \n ";
        break;
        }
    case 'E':
        {
        cout<<"\n ######  ";
        cout<<"\n #      ";
        cout<<"\n #####   ";
        cout<<"\n #      ";
        cout<<"\n ######  ";
        cout<<"\n \n ";
        break;
        }
    case 'F':
        {
        cout<<"\n ######  ";
        cout<<"\n #      ";
        cout<<"\n #####    ";
        cout<<"\n #      ";
        cout<<"\n #      ";
        cout<<"\n \n ";
        break;
        }
    case 'G':
        {
        cout<<"\n  ##### "; 
        cout<<"\n #      "; 
        cout<<"\n #  ### ";
        cout<<"\n #  # # ";
        cout<<"\n  ### # ";
        cout<<"\n \n ";
        break;
        }
    case 'H':
        {
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #######";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n \n ";
        break;
        }
    case 'I':
        {
        cout<<"\n ####### ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n    #    "; 
        cout<<"\n ####### "; 
        cout<<"\n \n ";
        break;
        }
    case 'J':
        {
        cout<<"\n ########";
        cout<<"\n     #   ";
        cout<<"\n     #   ";
        cout<<"\n     #   ";
        cout<<"\n #####    ";  
        cout<<"\n \n ";
        break;
        }
    case 'K':
        {
        cout<<"\n #    #  ";      
        cout<<"\n #   #   ";      
        cout<<"\n # ##    ";      
        cout<<"\n #   #   ";    
        cout<<"\n #    #  ";   
        cout<<"\n \n ";
        break;
        }
    case 'L':
        {
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n ####### ";
        cout<<"\n \n ";
        break;
        }
    case 'M':
        {
        cout<<"\n ##    ##  ";
        cout<<"\n # #  # #  ";
        cout<<"\n #  #   #  ";
        cout<<"\n #      #  ";
        cout<<"\n #      #  ";
        cout<<"\n \n ";
        break;
        }
    case 'N':
        {
        cout<<"\n #     #  ";
        cout<<"\n # #   #  ";
        cout<<"\n #  #  #  ";
        cout<<"\n #   # #  ";
        cout<<"\n #     #  ";
        cout<<"\n \n ";
        break;
        }
    case 'O':
        {
        cout<<"\n  #####   ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";
        cout<<"\n  #####  ";
        cout<<"\n \n ";
        break;
    case 'P':
        {
        cout<<"\n ######  ";
        cout<<"\n #    #  ";
        cout<<"\n #####   ";
        cout<<"\n #       "; 
        cout<<"\n #      ";
        cout<<"\n \n ";
        break;
        }
    case 'Q':
        {
        cout<<"\n  #####   ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";  
        cout<<"\n #  #  #  ";
        cout<<"\n  #####  ";
        cout<<"\n       #  ";   
        cout<<"\n \n ";
        break;
    case 'R':
        {
        cout<<"\n #####   ";  
        cout<<"\n #    #  ";  
        cout<<"\n #    #  ";
        cout<<"\n # ###   ";
        cout<<"\n #    #  ";
        cout<<"\n #     # ";
        cout<<"\n \n ";
        break;
        }
    case 'S':
        {
        cout<<"\n  ###### ";
        cout<<"\n #     ";
        cout<<"\n  #####  ";
        cout<<"\n       # ";
        cout<<"\n ###### ";
        cout<<"\n \n ";
        break;
        }
    case 'T':
        {
        cout<<"\n ########  ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n \n ";
        break;
        }
    case 'U':
        {
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n  #####  ";
        cout<<"\n \n ";
        break;
        }
    case 'V':
        {
        cout<<"\n #       #";
        cout<<"\n  #     # ";
        cout<<"\n   #   #  "; 
        cout<<"\n    # #   ";
        cout<<"\n     #    ";
        cout<<"\n \n ";
        break;
        }
    case 'W':
        {
        cout<<"\n #         #  ";
        cout<<"\n  #   #   #   ";
        cout<<"\n   # # # #    ";
        cout<<"\n    #   #      ";
        cout<<"\n \n ";
        break;
        }
    case 'X':
        {
        cout<<"\n #     #  ";
        cout<<"\n  #   #   ";
        cout<<"\n   # #    ";
        cout<<"\n  #   #   ";
        cout<<"\n #     #  ";
        cout<<"\n \n ";
        break;
        }
    case 'Y':
        {
        cout<<"\n #     # ";
        cout<<"\n  #   #  ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n \n ";
        break;
        }
    case 'Z':
        {
        cout<<"\n ######  ";
        cout<<"\n     #   ";
        cout<<"\n    #    ";
        cout<<"\n  #     ";
        cout<<"\n ######  ";
        cout<<"\n \n ";
        break;
        }
        case '0':
        {
        cout<<"\n  #### ";
        cout<<"\n #    # ";
        cout<<"\n #    # ";
        cout<<"\n #    # ";
        cout<<"\n  ####  ";
        cout<<"\n \n     ";
        break;
        }

    case '1':
        {
        cout<<"\n   #  ";
        cout<<"\n  ##  ";
        cout<<"\n   #  ";
        cout<<"\n   #  ";
        cout<<"\n #####";
        cout<<"\n \n   ";
        break;
        }
    case '2':
        {
        cout<<"\n  ###  ";
        cout<<"\n #   # ";
        cout<<"\n    #  ";
        cout<<"\n  #    ";
        cout<<"\n ##### ";
        cout<<"\n \n    ";
        break;
        }
    case '3':
        {
        cout<<"\n ##### ";
        cout<<"\n    #  ";
        cout<<"\n   ##  ";
        cout<<"\n    #  ";
        cout<<"\n#####  ";
        cout<<"\n \n    ";
        break;
        }
    case '4':
        {
        cout<<"\n     # ";
        cout<<"\n   # # ";
        cout<<"\n  #  # ";
        cout<<"\n ######";
        cout<<"\n     # ";
        cout<<"\n \n    ";
        break;
        }
    case '5':
        {
        cout<<"\n ######";
        cout<<"\n #     ";
        cout<<"\n ##### ";
        cout<<"\n      #";
        cout<<"\n ##### ";
        cout<<"\n \n    ";
        break;
        }
    case '6':
        {
        cout<<"\n  #####";
        cout<<"\n #     ";
        cout<<"\n ##### ";
        cout<<"\n #    #";
        cout<<"\n  #### ";
        cout<<"\n \n    ";
        break;
        }
    case '7':
        {
        cout<<"\n ######";
        cout<<"\n     # ";
        cout<<"\n    #  ";
        cout<<"\n   #   ";
        cout<<"\n  #    ";
        cout<<"\n \n    ";
        break;
        }
    case '8':
        {
        cout<<"\n  #####";
        cout<<"\n #    #";
        cout<<"\n  #### ";
        cout<<"\n #    #";
        cout<<"\n  #### ";
        cout<<"\n \n    ";
        break;
        }
    case '9':
        {
        cout<<"\n  #### ";
        cout<<"\n #    # ";
        cout<<"\n  ##### ";
        cout<<"\n      # ";
        cout<<"\n  ####  ";
        cout<<"\n \n     ";
        break;
        }
     
   case '.':
        {
        cout<<"\n  ## ";
        cout<<"\n #  # ";
        cout<<"\n  ## ";
        cout<<"\n \n     ";
        break;
        }
    default:
        {
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n \n ";
        break;
        }
    }    
    
    return 0;

    }
  }
 }
}

}
    cout<<"\t______________________________________"<<endl;
    cout << "\n\t       And if you liked it,        " << endl;
    cout << " \t   give a star on GitHub !   " << endl;
    cout << "  \t           Thank you!               " << endl;
    cout<<"\t______________________________________"<<endl<<endl;
}
