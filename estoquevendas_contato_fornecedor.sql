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
-- Table structure for table `contato_fornecedor`
--

DROP TABLE IF EXISTS `contato_fornecedor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `contato_fornecedor` (
  `id_Contato_Fornecedor` int NOT NULL AUTO_INCREMENT,
  `Telefone_Fornecedor` varchar(50) NOT NULL,
  `Celular_Fornecedor` varchar(50) NOT NULL,
  `Fornecedor` int NOT NULL,
  PRIMARY KEY (`id_Contato_Fornecedor`),
  KEY `Fornecedor` (`Fornecedor`),
  CONSTRAINT `contato_fornecedor_ibfk_1` FOREIGN KEY (`Fornecedor`) REFERENCES `fornecedor` (`Id_Fornecedor`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `contato_fornecedor`
--

LOCK TABLES `contato_fornecedor` WRITE;
/*!40000 ALTER TABLE `contato_fornecedor` DISABLE KEYS */;
INSERT INTO `contato_fornecedor` VALUES (1,'3734-2521','74 9 8181-9678',1),(2,'3984-4607','74 9 8907-7778',2),(3,'3457-9836','74 9 9871-9098',3),(4,'3345-6987','74 9 9435-9753',4),(5,'6745-6237','71 9 8935-9023',5),(6,'3734-2521','74 9 8181-9678',1),(7,'3984-4607','74 9 8907-7778',2),(8,'3457-9836','74 9 9871-9098',3),(9,'3345-6987','74 9 9435-9753',4),(10,'6745-6237','71 9 8935-9023',5);
/*!40000 ALTER TABLE `contato_fornecedor` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-09-04 18:23:32
