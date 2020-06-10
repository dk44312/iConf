create table Obszar (
  Id          int(50) not null auto_increment, 
  Nazwa       varchar(255) not null, 
  Lokalizacja varchar(255), 
  Grafika     blob, 
  primary key (Id));
create table Pokoj (
  Id           int(50) not null auto_increment, 
  Nazwa        varchar(255) not null, 
  Powierzchnia float, 
  Grafika      blob, 
  ObszarId     int(50) not null, 
  primary key (Id));
create table Wyposazenie (
  Id      int(50) not null auto_increment, 
  Nazwa   varchar(255) not null, 
  Ilosc   int(50) not null, 
  Opis    varchar(255), 
  PokojId int(50) not null, 
  primary key (Id));
create table Uzytkownik (
  Id       int(50) not null auto_increment, 
  Login    varchar(255) not null, 
  Imie     varchar(255), 
  Nazwisko varchar(255), 
  Nazwa    varchar(255) not null, 
  Email    varchar(255) not null, 
  Haslo    varchar(255) not null, 
  primary key (Id));
create table Spotkanie (
  Id                  int(50) not null auto_increment, 
  Nazwa               varchar(255) not null, 
  Data_rozpoczecia    date not null, 
  Godzina_rozpoczecia time not null, 
  Data_zakonczenia    date not null, 
  Godzina_zakonczenia time not null, 
  Opis                varchar(255), 
  Status              varchar(255) not null, 
  UzytkownikId        int(50) not null, 
  primary key (Id));
create table Spotkanie_Pokoj (
  PokojId     int(50) not null, 
  SpotkanieId int(50) not null, 
  primary key (PokojId, 
  SpotkanieId));
create table Spotkanie_Uzytkownik (
  SpotkanieId  int(50) not null, 
  UzytkownikId int(50) not null, 
  primary key (SpotkanieId, 
  UzytkownikId));
alter table Pokoj add constraint FKPokoj779014 foreign key (ObszarId) references Obszar (Id);
alter table Wyposazenie add constraint FKWyposazeni322728 foreign key (PokojId) references Pokoj (Id);
alter table Spotkanie_Pokoj add constraint FKSpotkanie_18913 foreign key (SpotkanieId) references Spotkanie (Id);
alter table Spotkanie_Pokoj add constraint FKSpotkanie_949837 foreign key (PokojId) references Pokoj (Id);
alter table Spotkanie_Uzytkownik add constraint FKSpotkanie_763461 foreign key (SpotkanieId) references Spotkanie (Id);
alter table Spotkanie_Uzytkownik add constraint FKSpotkanie_945264 foreign key (UzytkownikId) references Uzytkownik (Id);
alter table Spotkanie add constraint FKSpotkanie179831 foreign key (UzytkownikId) references Uzytkownik (Id);
