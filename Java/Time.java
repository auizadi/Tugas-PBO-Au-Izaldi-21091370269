

public class Time {
    private int second, minute, hour;

    //constuktor (overloader)
    public Time(int second, int minute, int hour){
        this.second = second;
        this.minute = minute;
        this.hour = hour;
    }

    public Time(){
        this.second = 0;
        this.minute = 0;
        this.hour = 0;

    }

    //set set
    public int getSecond(){
        return this.second;
    }
    public int getMinute(){
        return this.minute;
    }
    public int getHour(){
        return this.hour;
    }

    //-----
    //set get
    public void setSecond(int second){
        this.second = second;
    }
    public void setMinute(int minute){
        this.minute = minute;
    }
    public void setHour(int hour){
        this.hour = hour;
    }

    //setting
    public String toString(){
        return String.format("%02d:%02d:%02d", hour, minute, second);
    }

    public void setTime(int second, int minute, int hour){
        this.second = second;
        this.minute = minute;
        this.hour = hour;
    }

    //putar
    public Time nextSecond(){
        ++second;
        if(second >= 60){
            second = 0;
            ++minute;
            if(minute >= 60){
                minute = 0;
                ++hour;
                if(hour >= 24){
                    hour    = 0;
                }
            }
        }
        return this;
    }

    public static void main(String[] args){
        Time t1 = new Time(1, 2, 3);
        System.out.println(t1);
        Time t2 = new Time();
        System.out.println(t2);

        t1.setHour(20);
        t1.setMinute(10);
        t1.setSecond(34);

        System.out.println(t1);
        

        
       t1.setTime(56, 023, 12);
       System.out.println(t1);



    }
    
    
}
