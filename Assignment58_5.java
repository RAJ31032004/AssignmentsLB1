///////////////////////////////////////////////////////////
//
//  Program Name : DirectoryFileNameSizeData.java
//  Description  : Accept directory name from user and write
//                 name, size and data of all files into
//                 one newly created file Marvellous.txt
//  Author       : RAj Samir Jadhav
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;


class DirectoryFileNameSizeData
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
                        // Write file name & size
                        String Header = "\n====================================\n";
                        Header += "File Name : " + fobj.getName() + "\n";
                        Header += "File Size : " + fobj.length() + " bytes\n";
                        Header += "====================================\n";
                        foobj.write(Header.getBytes());

                        // Read and write file data
                        fiobj = new FileInputStream(fobj);

                        while((iRet = fiobj.read(Buffer)) != -1)
                        {
                            foobj.write(Buffer, 0, iRet);
                        }

                        foobj.write("\n\n".getBytes());

                        fiobj.close();
                    }
                }

                System.out.println("File name, size and data written successfully into Marvellous.txt");

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
