package pack;

public class ScreeningDetails {
    int screeningId;
    String filmTitle;
    String director;
    String genre;
    int screeningTime;
    int availableSeats;
    String status;

    ScreeningDetails(int screeningId, String filmTitle, String director, String genre, int screeningTime, int availableSeats, String status){
        this.screeningId = screeningId;
        this.filmTitle = filmTitle;
        this.director = director;
        this.genre = genre;
        this.screeningTime = screeningTime;
        this.availableSeats = availableSeats;
        this.status = status;
    }

    public void details(){
        System.out.println("\nScreening ID: "+screeningId);
        System.out.println("Film Title: "+filmTitle);
        System.out.println("Director: "+director);
        System.out.println("Genre: "+genre);
        System.out.println("Screening Time: "+screeningTime);
        System.out.println("Available Seats: "+availableSeats);
        System.out.println("Status: "+status);
    }
}

