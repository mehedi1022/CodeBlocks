package New;

public class DeliveryAgent {
    private String name;
    private String email;
    private String id;

    public DeliveryAgent(String name, String email, String id) {
        this.name = name;
        this.email = email;
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public String getId() {
        return id;
    }

    public String getEmail() {
        return email;
    }
}
