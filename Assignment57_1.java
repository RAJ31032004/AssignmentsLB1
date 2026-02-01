///////////////////////////////////////////////////////////
//
//  Program Name : FileCopy.java
//  Description  : Accept two file names from user,
//                 open first file, create second file
//                 and copy data from first to second
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;


//  Class Declaration
//
///////////////////////////////////////////////////////////
class FileCopy
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
            ///////////////////////////////////////////////////////////
            //
            //  Variable Declaration
            //
            ///////////////////////////////////////////////////////////
            String SourceFile = null;
            String DestFile = null;

            File fsrc = null;
            File fdest = null;

            FileInputStream fiobj = null;
            FileOutputStream foobj = null;

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            ///////////////////////////////////////////////////////////
            //
            //  Accept input from user
            //
            ///////////////////////////////////////////////////////////
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the source file name : ");
            SourceFile = sobj.nextLine();

            System.out.println("Enter the destination file name : ");
            DestFile = sobj.nextLine();

            ///////////////////////////////////////////////////////////
            //
            //  File Handling Logic
            //
            ///////////////////////////////////////////////////////////
            fsrc = new File(SourceFile);
            fdest = new File(DestFile);

            if(fsrc.exists())
            {
                fiobj = new FileInputStream(fsrc);

                // Create destination file if not exists
                if(!fdest.exists())
                {
                    fdest.createNewFile();
                }

                foobj = new FileOutputStream(fdest);

                // Copy data
                while((iRet = fiobj.read(Buffer)) != -1)
                {
                    foobj.write(Buffer, 0, iRet);
                }

                System.out.println("File copied successfully.");

                fiobj.close();
                foobj.close();
            }
            else
            {
                System.out.println("Source file not found.");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
