////////////////////////////////////////////////////////
//
// Description : Program to display total number of bytes
//               read from a given file
//
// Author : Raj Samir Jadhav
// Date : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CountBytes
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;

        FileInputStream fin = null;
        int iByte = 0;
        int iCnt = 0;

        try
        {
            System.out.println("Enter file name : ");
            FileName = sobj.nextLine();

            fin = new FileInputStream(FileName);

            while((iByte = fin.read()) != -1)
            {
                iCnt++;   // counting each byte
            }

            System.out.println("Total number of bytes read : " + iCnt);
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            try
            {
                if(fin != null) fin.close();
                sobj.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while closing file");
            }
        }
    }
}
