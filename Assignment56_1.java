///////////////////////////////////////////////////////////
//
//  Program Name : OpenFile.java
//  Description  : Accept file name from user and open it
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

///////////////////////////////////////////////////////////
//
//  Class Declaration
//
///////////////////////////////////////////////////////////
class OpenFile
{
    ///////////////////////////////////////////////////////////
    //
    //  Entry Point Function
    //
    ///////////////////////////////////////////////////////////
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
                FileInputStream fiobj = new FileInputStream(fobj);
                System.out.println("File opened successfully...");
                fiobj.close();
            }
            else
            {
                System.out.println("Unable to open file : File not found");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
