CREATE DATABASE `car`
/*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE  `car`;
CREATE TABLE `brake` (
  `RegNum` varchar(30) NOT NULL,
  `type` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`RegNum`)
) ;
CREATE TABLE `cars` (
  `RegNum` varchar(20) NOT NULL,
  `yob` int DEFAULT NULL,
  `licenceNum` varchar(30) NOT NULL,
  UNIQUE KEY `RegNum` (`RegNum`),
  UNIQUE KEY `licenceNum` (`licenceNum`)
) ;
CREATE TABLE `enginedetails` (
  `RegNum` varchar(30) NOT NULL,
  `cc` int DEFAULT NULL,
  `cylinders` int DEFAULT NULL,
  PRIMARY KEY (`RegNum`)
) ;
CREATE TABLE `tripdetails` (
  `RegNum` varchar(30) NOT NULL,
  `start` varchar(30) DEFAULT NULL,
  `end` varchar(30) DEFAULT NULL,
  UNIQUE KEY `RegNum_UNIQUE` (`RegNum`)
);

CREATE TABLE `ex_details` (
  `RegNum` varchar(30) NOT NULL,
  `color` varchar(20) DEFAULT NULL,
  `doors` int DEFAULT NULL,
  PRIMARY KEY (`RegNum`)
) ;
CREATE TABLE `gearbox` (
  `RegNum` varchar(30) NOT NULL,
  `type` varchar(30) DEFAULT NULL,
  `remarks` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`RegNum`)
) ;
CREATE TABLE `suspension` (
  `RegNum` varchar(30) NOT NULL,
  `springrate` int DEFAULT NULL,
  PRIMARY KEY (`RegNum`)
) ;
CREATE TABLE `tiredetails` (
  `RegNum` varchar(30) NOT NULL,
  `airpressure` int DEFAULT NULL,
  `width` int DEFAULT NULL,
  PRIMARY KEY (`RegNum`)
) ;
CREATE TABLE `wheeldetails` (
  `RegNum` varchar(30) DEFAULT NULL,
  `diameter` int DEFAULT NULL,
  UNIQUE KEY `RegNum` (`RegNum`)
) ;
