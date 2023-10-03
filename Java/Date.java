public class Date {
    private int year, month, day;

    public Date(int year, int month, int day){
        this.year   = year;
        this.month   = month;
        this.day   = day;
    }

    //getter/setter
    public int getYear(){
        return this.year;
    }

    public int getMonth(){
        return this.month;
    }

    public int getDay(){
        return this.day;
    }

    //set
    public void setYear(int year){
        this.year  = year;
    }

    public void setMonth(int month){
        this.month  = month;
    }

    public void setDay(int day){
        this.day  = day;
    }

    //deskrisi MM//DD//YYYY
    public String toString(){
        return String.format("%02d/%02d/%4d", month, day, year);
    }

    //set
    public void setDate(int year, int month, int day){
        this.year = year;
        this.month = month;
        this.day = day;
        
    }

    //cetak
    public static void main(String[] args){
        Date d1 = new Date(2020, 2, 8);
        System.out.println(d1);

        //tes getter dan setter
        d1.setYear(2002);
        d1.setMonth(02);
        d1.setDay(22);

        System.out.println("Tanggalan = " + d1);
    }
}
