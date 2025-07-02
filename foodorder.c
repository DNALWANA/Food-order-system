#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

char ccois[10];
int cnv,quantity,cois,cvg,stf,price;
#define MAX_ITEMS 100

FILE *empid,*f;
FILE *order,*r;
FILE *dlt;

void customer();
void divider();
void loading();
void nonveget();
void dchick();
void gchick();
void cbriya();
void bever();
void total();
void veget();
void burger();
void noodles();
void sandwich();
void bever2();
void vegtal();
void employemenu();
void addrcd();
void empdet();
void viewrdr();
void search();
void deleted();
void about();

void loading(){

    for (int i = 0; i < 101; i++)
    {
        printf("\rIn Progress:%d%%",  i);
        fflush(stdout);
        Sleep(20);
    }
}


void divider(){
    printf("=================================\n");
}

void adding(){
    printf("press 1 To Order again\n");
    printf("press 2 To Get your total\n");
    printf("Your choice: ");
}

enum pilih{
    YES,
    NO,
    INVALID,
};

enum pilih stringtonum(const char *input){

    if(strcmp(input, "Y")== 0) return YES;
    else if (strcmp(input, "N")==0) return NO;
    else return INVALID;

};

struct contact
{
    char nama[50],lastnam[50],add[50],landmark[50],phone[50];
    int sum;
    char tiperdr[30];
    char mennu[MAX_ITEMS][100];
    int totalitem;

}cd;

struct employid
{
    char emid[50],emnam[50],emdob[50],emyoj[50],emplac[50],emdepart[50];
}mpid;

struct contact cd;

int main(){
    system("cls");
    int choice;

    printf("Welcome to d'food\n");
    printf("1. Administration section\n");
    printf("2. Costumer section\n");
    printf("3. About us\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice); getchar();
    
    switch (choice)
    {
    case 1:
        employemenu();
        break;
    case 2:
        customer();
        break;
    case 3:
        about();
        break;
    
    default:
        printf("See You!\n");
        break;
    }
    return 0;
}

void customer(){
    system("cls");

    cd.sum = 0;
    cd.totalitem = 0;
    int ccus;

    divider();
    printf("\tWelcome\n");
    divider();

    printf("You are?\n");
    printf("1. Vegetarian\n");
    printf("OR\n");
    printf("2. Non vegetarian\n");
    printf("3. Back to main menu\n");
    printf("You are: ");
    scanf("%d", &ccus);getchar();
    switch (ccus)
    {
    case 1:
        loading();
        veget();
        break;
    case 2:
        loading();
        nonveget();
        break;

    case 3:
        loading();
        main();
        break;
    
    default:
        customer();
        break;
    }
}

void nonveget(){
    system("cls");

    strcpy(cd.tiperdr, "Non Vegetarian");

    divider();
    printf("Non Vegetarian Menu\n");
    divider();

    printf("1. Dry Chiken: Rp150\n");
    printf("2. Gravy Chiken: Rp200\n");
    printf("3. Chiken Biryani: Rp110\n");
    printf("4. Beverages: Rp50\n");
    printf("Enter what you want: ");
    scanf("%d", &cnv); getchar();

    switch (cnv)
    {
    case 1:
        dchick();
        break;
    case 2:
        gchick();
        break;
    case 3:
        cbriya();
        break;
    case 4:
        bever();
        break;
    
    default:
        nonveget();
        break;
    }
}

void dchick(){

    
    printf("Quantity: ");
    scanf("%d", &quantity); getchar();

    price = 150*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Dry Chicken X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        nonveget();
        break;
    case 2:
        total();
        break;
    
    default:
        dchick();
        break;
    }

}
void gchick(){
    
    printf("Quantity: ");
    scanf("%d", &quantity); getchar();

    price = 200*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Gravy Chicken X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        nonveget();
        break;
    case 2:
        total();
        break;
    
    default:
        gchick();
        break;
    }
}
void cbriya(){

    printf("Quantity: ");
    scanf("%d", &quantity);

    price = 110*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Chiken Briyani X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        nonveget();
        break;
    case 2:
        total();
        break;
    
    default:
        cbriya();
        break;
    }
}
void bever(){

    printf("Quantity: ");
    scanf("%d", &quantity); getchar();

    price = 50*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Beverages Non vegetarian X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        nonveget();
        break;
    case 2:
        total();
        break;
    
    default:
        bever();
        break;
    }
}

//VEGETARIAN MENU

void veget(){
    system("cls");

    strcpy(cd.tiperdr, "Vegetarian");

    divider();
    printf("\tVEGETARIAN MENU\n");
    divider();

    printf("1.Burger: Rp40\n");
    printf("2.Noodles: Rp60\n");
    printf("3.Sandwich: Rp45\n");
    printf("4.Beverages: Rp35\n");
    printf("5.Veg. Thaali: Rp150\n");
    printf("--> Dal\n");
    printf("--> Paneer\n");
    printf("--> Chapati\n");
    printf("--> Rice\n");
    printf("--> Papad\n");

    printf("Enter what you want: ");
    scanf("%d", &cvg); getchar();

    switch (cvg)
        {
        case 1:
            burger();
        break;
        case 2:
            noodles();
        break;
        case 3:
            sandwich();
        break;
        case 4:
            bever2();
        break;
        case 5:
            vegtal();
        break;
        default:
            veget();
        break;
    }
}

void burger(){

    printf("Quantity: ");
    scanf("%d", &quantity); getchar();

    price = 40*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Burger X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        veget();
        break;
    case 2:
        total();
        break;
    
    default:
        burger();
        break;
    }

}
void noodles(){

    printf("Quantity: ");
    scanf("%d", &quantity);

    price = 60*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Noodles X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        veget();
        break;
    case 2:
        total();
        break;
    
    default:
        noodles();
        break;
    }
}
void sandwich(){

    printf("Quantity: ");
    scanf("%d", &quantity);

    price = 45*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Sandwich X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        veget();
        break;
    case 2:
        total();
        break;
    
    default:
        sandwich();
        break;
    }
}
void bever2(){

    printf("Quantity: ");
    scanf("%d", &quantity); getchar();

    price = 35*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Beverages Vegetarian X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        veget();
        break;
    case 2:
        total();
        break;
    
    default:
        bever2();
        break;
    }
}

void vegtal(){

    printf("Quantity: ");
    scanf("%d", &quantity); getchar();

    price = 150*quantity;
    cd.sum += price;

    sprintf(cd.mennu[cd.totalitem], "Veg Thaali X%d: Rp%d",quantity,price);
    cd.totalitem++;

    adding();
    scanf("%d",&cois); getchar();
    switch (cois)
    {
    case 1:
        veget();
        break;
    case 2:
        total();
        break;
    
    default:
        vegtal();
        break;
    }
}

void total(){

    system("cls");

    printf("\n");
    char hoho[10];
    order = fopen("total.dat", "ab");

    for (int i = 0; i < cd.totalitem; i++)
    {
        printf("%d. %s\n", i+1, cd.mennu[i]);
    }
    
    printf("Total Price: %d\n",cd.sum);


    printf("Are you sure with your order ? (Y/N): ");
    fgets(hoho,sizeof(hoho),stdin);
    hoho[strcspn(hoho,"\n")]='\0';

    switch (stringtonum(hoho))
    {
    case YES:
        printf("Your total amount: %d\n", cd.sum);
    
        printf("Please give your contact details!\n");
        printf("Name: ");
        fgets(cd.nama,sizeof(cd.nama),stdin);
        cd.nama[strcspn(cd.nama,"\n")]='\0';

        printf("Last name: ");
        fgets(cd.lastnam,sizeof(cd.lastnam),stdin);
        cd.lastnam[strcspn(cd.lastnam,"\n")]='\0';

        printf("Phone: ");
        fgets(cd.phone,sizeof(cd.phone),stdin);
        cd.phone[strcspn(cd.phone,"\n")]='\0';

        printf("Addres: ");
        fgets(cd.add,sizeof(cd.add),stdin);
        cd.add[strcspn(cd.add,"\n")]='\0';

        printf("Landmark: ");
        fgets(cd.landmark,sizeof(cd.landmark),stdin);
        cd.landmark[strcspn(cd.landmark,"\n")]='\0';


        printf("\n\n");
        printf("Your enter details are:\n");
        printf("Name: %s\n", cd.nama);
        printf("Last name: %s\n",cd.lastnam);
        printf("Phone: %s\n",cd.phone);
        printf("Addres: %s\n",cd.add);
        printf("Landmark: %s\n",cd.landmark);

        fwrite(&cd,sizeof(struct contact),1,order);
        fclose(order);

        system("pause");
        printf("\n");
        divider();
        printf("YOUR ORDER WILL BE AT YOUR HOME IN 30 MINUTES.\n");
        printf("\t...HAPPY ORDERING...\n");
        divider();

        system("pause");
        customer();
        break;
    case NO:
        printf("Back to menu\n");
        fclose(order);
        system("pause");
        customer();
        break;
    
    default:
        fclose(order);
        printf("Error");
        break;
    }
}



//Employe Menu

void employemenu(){

    system("cls");

    divider();
    printf("WELCOME TO THE EMPLOYEE SECTION\n");
    divider();

    printf("1. Add New Record\n");
    printf("2. Search Record\n");
    printf("3. Delete Record\n");
    printf("4. View the Record\n");
    printf("5. View previous orders placed\n");
    printf("6. Back to menu\n");
    printf("Enter your choice: ");
    scanf("%d", &stf);getchar();

    switch (stf)
    {
        case 1:
            loading();
            addrcd();
        break;
        case 2:
            loading();
            search();
        break;
        case 3:
            loading();
            deleted();
        break;
        case 4:
            loading();
            empdet();
        break;
        case 5:
            loading();
            viewrdr();
        break;
        case 6:
            loading();
            main();
        break;

        default:
            employemenu();
        break;
    }
}

void addrcd(){

    system("cls");
    struct employid mpid;

    empid = fopen("employid.dat","ab");

    printf("Employee ID: ");
    fgets(mpid.emid,sizeof(mpid.emid),stdin);
    mpid.emid[strcspn(mpid.emid,"\n")]='\0';

    printf("Employee Name: ");
    fgets(mpid.emnam,sizeof(mpid.emnam),stdin);
    mpid.emnam[strcspn(mpid.emnam,"\n")]='\0';

    printf("Date of Birth: ");
    fgets(mpid.emdob,sizeof(mpid.emdob),stdin);
    mpid.emdob[strcspn(mpid.emdob,"\n")]='\0';

    printf("Year of Joining ");
    fgets(mpid.emyoj,sizeof(mpid.emyoj),stdin);
    mpid.emyoj[strcspn(mpid.emyoj,"\n")]='\0';

    printf("Place: ");
    fgets(mpid.emplac,sizeof(mpid.emplac),stdin);
    mpid.emplac[strcspn(mpid.emplac,"\n")]='\0';

    printf("Departement: ");
    fgets(mpid.emdepart,sizeof(mpid.emdepart),stdin);
    mpid.emdepart[strcspn(mpid.emdepart,"\n")]='\0';


    printf("The Record Is Successfully Saved ! !\n");

    printf("Save any More?(Y/N): ");
    fgets(ccois,sizeof(ccois),stdin);
    ccois[strcspn(ccois,"\n")]='\0';

    switch (stringtonum(ccois))
    {
    case YES :
        fwrite(&mpid,sizeof(struct employid),1,empid);
        fclose(empid);
        addrcd();
        break;
    case NO :
        fwrite(&mpid,sizeof(struct employid),1,empid);
        fclose(empid);
        employemenu();
        break;
    
    default:
        break;
    }
}

void empdet(){
    system("cls");

    struct employid mpid;

    divider();
    printf("EMPLOYEE DETAILS\n");
    divider();

    f = fopen("employid.dat","rb");
    if (f == NULL)
    {
        printf("Data Not Found\n");
        return;
    }
    
    printf("%-40s %-20s %-30s %-24s %-16s %-24s\n","DEPARTEMENT","ID","EMPLOYEE NAME", "D.O.B", "Y.O.J", "PLACE");

    while (fread(&mpid,sizeof(struct employid),1,f))
    {
        printf("%-40s %-20s %-30s %-24s %-16s %-24s\n", mpid.emdepart, mpid.emid,mpid.emnam,mpid.emdob,mpid.emyoj,mpid.emplac);
    }
    
    fclose(f);

    printf("Press ENTER to return to main menu..");
    getchar();
    employemenu();
}

void viewrdr(){

    system("cls");

    divider();
    printf("RECORD ORDER\n");
    divider();

    r = fopen("total.dat","rb");
    if (r == NULL)
    {
        printf("File Empty\n");
        system("pause");
        employemenu();
    }
    
    while (fread(&cd,sizeof(struct contact),1,r))
    {
        printf("Tipe Order: %s\n",cd.tiperdr);
        printf("Grand Total: %d\n",cd.sum);
        printf("Order place by: %s %s\n", cd.nama,cd.lastnam);
        printf("Phone number: %s\n", cd.phone);
        printf("\n");
    }
    
    fclose(r);

    printf("Back to main menu..");
    getchar();

    employemenu();
}

void search(){

    system("cls");
    char see[50],suis[10];
    int found = 0;

    struct employid mpid;

    divider();
    printf("SEARCH EMPLOYEE\n");
    divider();

    f = fopen("employid.dat","rb");

    printf("Enter Employee Name: ");
    fgets(see,sizeof(see),stdin);
    see[strcspn(see,"\n")]='\0';

    while (fread(&mpid,sizeof(struct employid),1,f))
    {
        if (strcmp(see,mpid.emnam)==0)
        {
            found = 1;
            printf("\n");
            printf("ID: %s\n",mpid.emid);
            printf("Name: %s\n",mpid.emnam);
            printf("Date Of Birth: %s\n",mpid.emdob);
            printf("Year Of Joining: %s\n",mpid.emyoj);
            printf("Departement: %s\n",mpid.emdepart);
            printf("Place: %s\n",mpid.emplac);
            printf("\n");
        
        }
    }

    fclose(f);

    if (!found)
    {
        printf("Data not found\n");
    }
    
    printf("Try Another One ? (Y/N): ");
    fgets(suis,sizeof(suis),stdin);
    suis[strcspn(suis,"\n")]='\0';

    switch (stringtonum(suis))
    {
    case YES:
        search();
        break;
    case NO:
        employemenu();
        break;
    
    default:
        search();
        break;
    }

}

void deleted(){

    system("cls");

    struct employid mpid;
    char delnam[50];
    int pound = 0;

    divider();
    printf("DELETED DATA EMPLOYEE\n");
    divider();

    f = fopen("employid.dat","rb");
    dlt = fopen("Trash.dat","wb");

    printf("Enter the employee name to delete the data: ");
    fgets(delnam,sizeof(delnam),stdin);
    delnam[strcspn(delnam,"\n")]='\0';

    while (fread(&mpid,sizeof(struct employid),1,f))
    {
        if (strcmp(delnam,mpid.emnam)==0)
        {
            pound = 1;
        }else
        {
            fwrite(&mpid,sizeof(struct employid),1,dlt);
        }
        
    }

    fclose(f);
    fclose(dlt);
    
    if (pound)
    {
        remove("employid.dat");
        rename("Trash.dat","employid.dat");
        printf("Data deleted succesfully\n");
    }else
    {
        remove("Trash.dat");
        printf("File not found\n");
    }
    
    printf("Press ENTER to main menu..");
    getchar();
    employemenu();
}

void about(){

    system("cls");

    divider();
    printf("\tABOUT US\n");
    divider();

    printf("\n");
    printf("\tKami adalah platform pemesanan digital berbasis online yang hadir untuk mempermudah Anda dalam\n\tmelakukan pemesanan berbagai produk dan layanan hanya melalui genggaman tangan.\n\tDengan sistem yang cepat, praktis, dan aman, kami menghubungkan pelanggan dengan penyedia layanan secara efisien\n\ttanpa batasan ruang dan waktu.\n\n");
    printf("\tKami percaya bahwa era digital menuntut kemudahan dan kecepatan. Oleh karena itu, kami menghadirkan\n\tsolusi pemesanan yang terintegrasi, real-time, dan user-friendly, baik untuk kebutuhan sehari-hari, bisnis,\n\tmaupun acara khusus.\n\n");
    printf("\tDengan dukungan teknologi terkini, layanan kami dapat diakses 24/7 dan didesain untuk memberikan\n\tpengalaman pengguna terbaik mulai dari proses pemesanan, konfirmasi, hingga pembayaran yang\n\ttransparan dan terpercaya.\n\n");
    printf("\tMisi kami adalah menjadi jembatan digital yang menghubungkan kebutuhan pelanggan dengan berbagai\n\tlayanan berkualitas, serta terus berinovasi dalam menciptakan kemudahan dalam setiap transaksi online.\n\n");
    system("pause");
    main();
}