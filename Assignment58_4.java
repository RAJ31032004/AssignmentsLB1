///////////////////////////////////////////////////////////
//
//  Program Name : DirectoryFileNameData.java
//  Description  : Accept directory name from user and write
//                 data of all files along with their names
//                 into one newly created file Marvellous.txt
//  Author       : Raj samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;


class DirectoryFileNameData
{
    
    public static void main(String Arg[])
    {
        try
        {
            
            String DirName = null;
            File dobj = null;
            File Arr[] = null;

            FileInputStream fiobj = null;
            FileOutputStream foobj = null;

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the directory name : ");
            DirName = sobj.nextLine();

           //  Directory Handling Logic
            dobj = new File(DirName);

            if(dobj.exists() && dobj.isDirectory())
            {
                Arr = dobj.listFiles();

                // Create Marvellous.txt
                foobj = new FileOutputStream("Marvellous.txt");

                for(File fobj : Arr)
                {
                    if(fobj.isFile())
                    {
                        // Write file name
                        String Header = "\n====================================\n";
                        Header = Header + "File Name : " + fobj.getName() + "\n";
                        Header = Header + "====================================\n";
                        foobj.write(Header.getBytes());

                        // Read file data
                        fiobj = new FileInputStream(fobj);

                        while((iRet = fiobj.read(Buffer)) != -1)
                        {
                            foobj.write(Buffer, 0, iRet);
                        }

                        foobj.write("\n\n".getBytes());

                        fiobj.close();
                    }
                }

                System.out.println("File names and data written successfully into Marvellous.txt");

                foobj.close();
            }
            else
            {
                System.out.println("Invalid directory name.");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
