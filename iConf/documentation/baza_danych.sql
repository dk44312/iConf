-- phpMyAdmin SQL Dump
-- version 3.3.10
-- http://www.phpmyadmin.net
--
-- Host: db.zut.edu.pl
-- Czas wygenerowania: 01 Cze 2020, 08:29
-- Wersja serwera: 1.0.317
-- Wersja PHP: 5.4.16

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Baza danych: `wl44545`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Obszar`
--

CREATE TABLE IF NOT EXISTS `Obszar` (
  `Id` int(50) NOT NULL AUTO_INCREMENT,
  `Nazwa` varchar(255) NOT NULL,
  `Lokalizacja` varchar(255) DEFAULT NULL,
  `Grafika` blob DEFAULT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Zrzut danych tabeli `Obszar`
--


-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Pokój`
--

CREATE TABLE IF NOT EXISTS `Pokój` (
  `Id` int(50) NOT NULL AUTO_INCREMENT,
  `Nazwa` varchar(255) NOT NULL,
  `Powierzchnia` float DEFAULT NULL,
  `Grafika` blob DEFAULT NULL,
  `ObszarId` int(50) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FKPokój779014` (`ObszarId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Zrzut danych tabeli `Pokój`
--


-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Spotkanie`
--

CREATE TABLE IF NOT EXISTS `Spotkanie` (
  `Id` int(50) NOT NULL AUTO_INCREMENT,
  `Nazwa` varchar(255) NOT NULL,
  `Data_rozpoczęcia` date NOT NULL,
  `Godzina_rozpoczęcia` time NOT NULL,
  `Data_zakończenia` date NOT NULL,
  `Godzina_zakończenia` time NOT NULL,
  `Opis` varchar(255) DEFAULT NULL,
  `Status` varchar(255) NOT NULL,
  `UżytkownikId` int(50) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FKSpotkanie179831` (`UżytkownikId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Zrzut danych tabeli `Spotkanie`
--


-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Spotkanie_Pokój`
--

CREATE TABLE IF NOT EXISTS `Spotkanie_Pokój` (
  `PokójId` int(50) NOT NULL,
  `SpotkanieId` int(50) NOT NULL,
  PRIMARY KEY (`PokójId`,`SpotkanieId`),
  KEY `FKSpotkanie_18913` (`SpotkanieId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Zrzut danych tabeli `Spotkanie_Pokój`
--


-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Spotkanie_Użytkownik`
--

CREATE TABLE IF NOT EXISTS `Spotkanie_Użytkownik` (
  `SpotkanieId` int(50) NOT NULL,
  `UżytkownikId` int(50) NOT NULL,
  PRIMARY KEY (`SpotkanieId`,`UżytkownikId`),
  KEY `FKSpotkanie_945264` (`UżytkownikId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Zrzut danych tabeli `Spotkanie_Użytkownik`
--


-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Użytkownik`
--

CREATE TABLE IF NOT EXISTS `Użytkownik` (
  `Id` int(50) NOT NULL AUTO_INCREMENT,
  `Login` varchar(255) NOT NULL,
  `Imię` varchar(255) DEFAULT NULL,
  `Nazwisko` varchar(255) DEFAULT NULL,
  `Nazwa` varchar(255) NOT NULL,
  `Email` varchar(255) NOT NULL,
  `Hasło` varchar(255) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Zrzut danych tabeli `Użytkownik`
--


-- --------------------------------------------------------

--
-- Struktura tabeli dla  `Wyposażenie`
--

CREATE TABLE IF NOT EXISTS `Wyposażenie` (
  `Id` int(50) NOT NULL AUTO_INCREMENT,
  `Nazwa` varchar(255) NOT NULL,
  `Ilość` int(50) NOT NULL,
  `Opis` varchar(255) DEFAULT NULL,
  `PokójId` int(50) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FKWyposażeni322728` (`PokójId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Zrzut danych tabeli `Wyposażenie`
--


--
-- Ograniczenia dla zrzutów tabel
--

--
-- Ograniczenia dla tabeli `Pokój`
--
ALTER TABLE `Pokój`
  ADD CONSTRAINT `FKPokój779014` FOREIGN KEY (`ObszarId`) REFERENCES `Obszar` (`Id`);

--
-- Ograniczenia dla tabeli `Spotkanie`
--
ALTER TABLE `Spotkanie`
  ADD CONSTRAINT `FKSpotkanie179831` FOREIGN KEY (`UżytkownikId`) REFERENCES `Użytkownik` (`Id`);

--
-- Ograniczenia dla tabeli `Spotkanie_Pokój`
--
ALTER TABLE `Spotkanie_Pokój`
  ADD CONSTRAINT `FKSpotkanie_18913` FOREIGN KEY (`SpotkanieId`) REFERENCES `Spotkanie` (`Id`),
  ADD CONSTRAINT `FKSpotkanie_949837` FOREIGN KEY (`PokójId`) REFERENCES `Pokój` (`Id`);

--
-- Ograniczenia dla tabeli `Spotkanie_Użytkownik`
--
ALTER TABLE `Spotkanie_Użytkownik`
  ADD CONSTRAINT `FKSpotkanie_763461` FOREIGN KEY (`SpotkanieId`) REFERENCES `Spotkanie` (`Id`),
  ADD CONSTRAINT `FKSpotkanie_945264` FOREIGN KEY (`UżytkownikId`) REFERENCES `Użytkownik` (`Id`);

--
-- Ograniczenia dla tabeli `Wyposażenie`
--
ALTER TABLE `Wyposażenie`
  ADD CONSTRAINT `FKWyposażeni322728` FOREIGN KEY (`PokójId`) REFERENCES `Pokój` (`Id`);
