-- MySQL dump 10.13  Distrib 8.0.30, for Win64 (x86_64)
--
-- Host: localhost    Database: estoquevendas
-- ------------------------------------------------------
-- Server version	8.0.30

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `cliente`
--

DROP TABLE IF EXISTS `cliente`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cliente` (
  `Id_Cliente` int NOT NULL AUTO_INCREMENT,
  `Nome_Cliente` varchar(50) NOT NULL,
  `Email_Cliente` varchar(50) NOT NULL,
  `Sobrenome_Cliente` varchar(50) NOT NULL,
  `Tipo_Cliente` int NOT NULL,
  PRIMARY KEY (`Id_Cliente`),
  KEY `Tipo_Cliente` (`Tipo_Cliente`),
  CONSTRAINT `cliente_ibfk_1` FOREIGN KEY (`Tipo_Cliente`) REFERENCES `tipo_cliente` (`id_Tipo_Cliente`)
) ENGINE=InnoDB AUTO_INCREMENT=25 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cliente`
--

LOCK TABLES `cliente` WRITE;
/*!40000 ALTER TABLE `cliente` DISABLE KEYS */;
INSERT INTO `cliente` VALUES (13,'DENIS','DENI@gmail.com','ALCANTARA',1),(14,'GUILHERME','GUI@gmail.com','MOURA',2),(15,'MIGUEL','MIGUEL@gmail.com','VIEIRA',3),(16,'ROBERT','ROBERT@gmail.com','AGUIAR',4),(17,'THALIA','THA_LIA@gmail.com','FERREIRA',5),(18,'JOAO','JOAO@gmail.com','TELES',6),(19,'JOAO','JOAOG@gmail.com','CRUZ',7),(20,'ROGERIO','ROGER@gmail.com','VIEIRA',8),(21,'LUIS','LUI@gmail.com','DANTAS',9),(22,'ROBERTO','ROBE@gmail.com','POJUCA',10),(23,'ELBA','ELBA@gmail.com','SANTOS',11),(24,'ITALO','oli@gmail.com','Souza',12);
/*!40000 ALTER TABLE `cliente` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-09-04 18:23:31
