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
-- Table structure for table `tipo_cliente`
--

DROP TABLE IF EXISTS `tipo_cliente`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tipo_cliente` (
  `id_Tipo_Cliente` int NOT NULL AUTO_INCREMENT,
  `CPF` varchar(50) DEFAULT NULL,
  `CNPJ` varchar(50) DEFAULT NULL,
  `Tipo_Cliente` varchar(50) NOT NULL,
  PRIMARY KEY (`id_Tipo_Cliente`)
) ENGINE=InnoDB AUTO_INCREMENT=37 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tipo_cliente`
--

LOCK TABLES `tipo_cliente` WRITE;
/*!40000 ALTER TABLE `tipo_cliente` DISABLE KEYS */;
INSERT INTO `tipo_cliente` VALUES (1,'540.167.535-62',NULL,'Pessoa Fisica'),(2,'02.740.207/0001-28',NULL,'Pessoa Juridica'),(3,'019.388.465-83',NULL,'Pessoa Fisica'),(4,'85.304.418/0001-45',NULL,'Pessoa Juridica'),(5,'207.102.005-79',NULL,'Pessoa Fisica'),(6,'83.515.745/0001-10',NULL,'Pessoa Juridica'),(7,'595.340.335-61',NULL,'Pessoa Fisica'),(8,'12.017.833/0001-44',NULL,'Pessoa Juridica'),(9,'017.380.305-98',NULL,'Pessoa Fisica'),(10,'45.612.131/0001-68',NULL,'Pessoa Juridica'),(11,'607.346.845-84',NULL,'Pessoa Fisica'),(12,'91.548.682/0001-27',NULL,'Pessoa Juridica'),(13,'540.167.535-62',NULL,'Pessoa Fisica'),(14,'02.740.207/0001-28',NULL,'Pessoa Juridica'),(15,'019.388.465-83',NULL,'Pessoa Fisica'),(16,'85.304.418/0001-45',NULL,'Pessoa Juridica'),(17,'207.102.005-79',NULL,'Pessoa Fisica'),(18,'83.515.745/0001-10',NULL,'Pessoa Juridica'),(19,'595.340.335-61',NULL,'Pessoa Fisica'),(20,'12.017.833/0001-44',NULL,'Pessoa Juridica'),(21,'017.380.305-98',NULL,'Pessoa Fisica'),(22,'45.612.131/0001-68',NULL,'Pessoa Juridica'),(23,'607.346.845-84',NULL,'Pessoa Fisica'),(24,'91.548.682/0001-27',NULL,'Pessoa Juridica'),(25,'540.167.535-62',NULL,'Pessoa Fisica'),(26,'02.740.207/0001-28',NULL,'Pessoa Juridica'),(27,'019.388.465-83',NULL,'Pessoa Fisica'),(28,'85.304.418/0001-45',NULL,'Pessoa Juridica'),(29,'207.102.005-79',NULL,'Pessoa Fisica'),(30,'83.515.745/0001-10',NULL,'Pessoa Juridica'),(31,'595.340.335-61',NULL,'Pessoa Fisica'),(32,'12.017.833/0001-44',NULL,'Pessoa Juridica'),(33,'017.380.305-98',NULL,'Pessoa Fisica'),(34,'45.612.131/0001-68',NULL,'Pessoa Juridica'),(35,'607.346.845-84',NULL,'Pessoa Fisica'),(36,'91.548.682/0001-27',NULL,'Pessoa Juridica');
/*!40000 ALTER TABLE `tipo_cliente` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-09-04 18:23:33
