import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
      Scanner scn = new Scanner(System.in);
      int dr = scn.nextInt();
      int dc = scn.nextInt();
      ArrayList<String> myans = getMazePaths(1 , 1 , dr , dc);
      System.out.println(myans);

    }

    // sr - source row
    // sc - source column
    // dr - destination row
    // dc - destination column
    public static ArrayList<String> getMazePaths(int sr, int sc, int dr, int dc) {
        


        if(sr==dr && sc==dc){
          ArrayList<String> name = new ArrayList<>();
          name.add("");
          return name;
        }

        if(sr>dr || sc>dc){
           ArrayList<String> name = new ArrayList<>();
           return name;
        }
        

        // for handling the horizontal cases
       ArrayList<String> paths = new ArrayList<>();
        for(int i = 1 ; i <=dc-sc ; i++){
            ArrayList<String>hpaths = getMazePaths(sr,sc+i,dr,dc);

            for(String hpath : hpaths){
              paths.add("h"+i+hpath);
            }
        }
     

      // for handling the vertical cases;
      
      for(int i = 1 ; i <=dr-sr ; i++){
            ArrayList<String>vpaths = getMazePaths(sr+i,sc,dr,dc);

            for(String vpath : vpaths){
              paths.add("v"+i+vpath);
            }
        }

        // for handling the diagonal conditions over there


      for(int i = 1 ; i<=dr-sr && i <=dc-sc ; i++){
            ArrayList<String>dpaths = getMazePaths(sr +i,sc+i,dr,dc);

            for(String dpath : dpaths){
              paths.add("d"+i+dpath);
            }
        }

       return paths;
    }

}