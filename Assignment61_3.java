////////////////////////////////////////////////////////
//
//  Description : Program to append a string at the end of file
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class AppendString
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        String Data = null;

        FileOutputStream fout = null;

        try
        {
            System.out.println("Enter file name : ");
            FileName = sobj.nextLine();

            System.out.println("Enter string to append : ");
            Data = sobj.nextLine();

            // Open file in append mode (true)
            fout = new FileOutputStream(FileName, true);

            byte Arr[] = Data.getBytes();

            fout.write(Arr);

            System.out.println("Data appended successfully");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            try
            {
                if(fout != null) fout.close();
                sobj.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while closing file");
            }
        }
    }
}
