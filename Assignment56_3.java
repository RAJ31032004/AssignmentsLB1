///////////////////////////////////////////////////////////
//
//  Program Name : AppendFile.java
//  Description  : Accept file name from user, open it in
//                 write mode and append data at the end
//  Author       : Raj Samir Jadhav
//  Date        : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class AppendFile
{
    public static void main(String Arg[])
    {
        try
        {
    
            String FileName = null;
            String Data = null;
            File fobj = null;
            FileOutputStream foobj = null;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name : ");
            FileName = sobj.nextLine();

            System.out.println("Enter the data to write at end of file : ");
            Data = sobj.nextLine();

            fobj = new File(FileName);

            if(fobj.exists())
            {
                // true -> append mode
                foobj = new FileOutputStream(fobj, true);

                foobj.write(Data.getBytes());
                foobj.write('\n');

                System.out.println("Data written successfully at end of file.");

                foobj.close();
            }
            else
            {
                System.out.println("File not found. Unable to write data.");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
