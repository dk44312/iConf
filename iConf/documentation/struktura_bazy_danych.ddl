create table Obszar (
  Id          int(50) not null auto_increment, 
  Nazwa       varchar(255) not null, 
  Lokalizacja varchar(255), 
  Grafika     blob, 
  primary key (Id));
create table Pokój (
  Id           int(50) not null auto_increment, 
  Nazwa        varchar(255) not null, 
  Powierzchnia float, 
  Grafika      blob, 
  ObszarId     int(50) not null, 
  primary key (Id));
create table Wyposażenie (
  Id      int(50) not null auto_increment, 
  Nazwa   varchar(255) not null, 
  Ilość   int(50) not null, 
  Opis    varchar(255), 
  PokójId int(50) not null, 
  primary key (Id));
create table Użytkownik (
  Id       int(50) not null auto_increment, 
  Login    varchar(255) not null, 
  Imię     varchar(255), 
  Nazwisko varchar(255), 
  Nazwa    varchar(255) not null, 
  Email    varchar(255) not null, 
  Hasło    varchar(255) not null, 
  primary key (Id));
create table Spotkanie (
  Id                  int(50) not null auto_increment, 
  Nazwa               varchar(255) not null, 
  Data_rozpoczęcia    date not null, 
  Godzina_rozpoczęcia time not null, 
  Data_zakończenia    date not null, 
  Godzina_zakończenia time not null, 
  Opis                varchar(255), 
  Status              varchar(255) not null, 
  UżytkownikId        int(50) not null, 
  primary key (Id));
create table Spotkanie_Pokój (
  PokójId     int(50) not null, 
  SpotkanieId int(50) not null, 
  primary key (PokójId, 
  SpotkanieId));
create table Spotkanie_Użytkownik (
  SpotkanieId  int(50) not null, 
  UżytkownikId int(50) not null, 
  primary key (SpotkanieId, 
  UżytkownikId));
alter table Pokój add constraint FKPokój779014 foreign key (ObszarId) references Obszar (Id);
alter table Wyposażenie add constraint FKWyposażeni322728 foreign key (PokójId) references Pokój (Id);
alter table Spotkanie_Pokój add constraint FKSpotkanie_18913 foreign key (SpotkanieId) references Spotkanie (Id);
alter table Spotkanie_Pokój add constraint FKSpotkanie_949837 foreign key (PokójId) references Pokój (Id);
alter table Spotkanie_Użytkownik add constraint FKSpotkanie_763461 foreign key (SpotkanieId) references Spotkanie (Id);
alter table Spotkanie_Użytkownik add constraint FKSpotkanie_945264 foreign key (UżytkownikId) references Użytkownik (Id);
alter table Spotkanie add constraint FKSpotkanie179831 foreign key (UżytkownikId) references Użytkownik (Id);
