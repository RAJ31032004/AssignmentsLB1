///////////////////////////////////////////////////////////
//
//  Program Name : Checksum.java
//  Description  : Accept file name from user, calculate
//                 checksum of that file and display it
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class Checksum
{
    
    public static void main(String Arg[])
    {
        try
        {
            String FileName = null;
            File fobj = null;
            FileInputStream fiobj = null;
            byte Buffer[] = new byte[1024];
            int iRet = 0;
            long CheckSum = 0;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name : ");
            FileName = sobj.nextLine();

            fobj = new File(FileName);

            if(fobj.exists())
            {
                fiobj = new FileInputStream(fobj);

                while((iRet = fiobj.read(Buffer)) != -1)
                {
                    for(int i = 0; i < iRet; i++)
                    {
                        CheckSum = CheckSum + Buffer[i];
                    }
                }

                System.out.println("Checksum of file is : " + CheckSum);

                fiobj.close();
            }
            else
            {
                System.out.println("File not found.");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
