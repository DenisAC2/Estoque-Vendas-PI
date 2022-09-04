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
-- Table structure for table `contato_cliente`
--

DROP TABLE IF EXISTS `contato_cliente`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `contato_cliente` (
  `id_Contato_Cliente` int NOT NULL AUTO_INCREMENT,
  `Telefone_Cliente` varchar(50) NOT NULL,
  `Celular_Cliente` varchar(50) NOT NULL,
  `Cliente` int NOT NULL,
  PRIMARY KEY (`id_Contato_Cliente`),
  KEY `Cliente` (`Cliente`),
  CONSTRAINT `contato_cliente_ibfk_1` FOREIGN KEY (`Cliente`) REFERENCES `cliente` (`Id_Cliente`)
) ENGINE=InnoDB AUTO_INCREMENT=73 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `contato_cliente`
--

LOCK TABLES `contato_cliente` WRITE;
/*!40000 ALTER TABLE `contato_cliente` DISABLE KEYS */;
INSERT INTO `contato_cliente` VALUES (61,'(71) 3815-8345','(71) 96855-7754',13),(62,'(77) 2871-4327','(77) 99121-7184',14),(63,'(71) 3657-5421','(71) 97314-81254',15),(64,'(71) 3815-8545','(71) 92455-7654',16),(65,'(74) 3815-8765','(74) 96785-7754',17),(66,'(75) 3815-8045','(75) 96235-7984',18),(67,'(73) 3615-8045','(73) 96855-3954',19),(68,'(71) 3215-8045','(71) 95671-7776',20),(69,'(77) 3115-8045','(77) 96855-5287',21),(70,'(75) 6815-8045','(75) 96845-7754',22),(71,'(73) 3813-8045','(73) 92855-7754',23),(72,'(74) 3235-8045','(74) 96755-7754',24);
/*!40000 ALTER TABLE `contato_cliente` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-09-04 18:23:34
