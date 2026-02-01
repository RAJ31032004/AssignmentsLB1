///////////////////////////////////////////////////////////
//
//  Program Name : CreateFile.java
//  Description  : Accept file name from user and create
//                 new file if it does not exist
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

//  Class Declaration
class CreateFile
{

    public static void main(String Arg[])
    {
        try
        {
            
            String FileName = null;
            File fobj = null;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name : ");
            FileName = sobj.nextLine();

            fobj = new File(FileName);

            if(fobj.exists())
            {
                System.out.println("File already exists.");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File created successfully.");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
