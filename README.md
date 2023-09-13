# Proyecto Fundamentos de Biodiseño
¡Bienvenidos al repositorio del grupo 10 de Fundamentos de Biodiseño!

# Conoce a nuestro equipo
- _Jose Luis Jesús Nuñez Rivera (Coordinador General)_
- _Micaela de Fatima Tassara Camarena (Coordinadora de Modelado 3D)_
- _Edgar Antonio Aguilar Ocas (Coordinador de Electrónica)_
- _Andree Pascale Merino Contreras (Coordinadora de Programación)_
- _Valeria Alejandra Leonardo Castillón (Coordinadora de Impresión 3D)_

# ¿A qué nos referimos con Open Science Hardware?

El Hardware es una parte esencial de procesos experimentales y los avances en la instrumentación han sido clave para revoluciones científicas. Sin embargo, la actual cadena de suministros de estos hardware científicos limita el acceso e impide la creatividad y personalización. El Open Science Hardware aborda esta problemática facilitando un espacio para compartir, diseñar y fabricar de manera abierta y accesible herramientas, dispositivos y equipos usados en investigaciones científicas y experimentos. Con esto se busca incrementar la transparencia, colaboración y accesibilidad en la comunidad científica, permitiendo que todo esto esté disponible gratuitamente a cualquiera para reproducir, modificar y compartir. [14]

# Analisis del caso 
1. "Tema": Open Science Hardware para Salud y Laboratorio
2. "Problemática": Aumento de quemaduras de segundo grado en menores de edad del país
 

### 1.2 Contexto social
- Las quemaduras representan un desafío de salud pública a nivel global. No solo por la frecuencia y facilidad con la que ocurren, sino que, en función de su gravedad, pueden generar discapacidades e incluso la muerte. Según la OMS, a nivel mundial, se estima que alrededor de 180,000 muertes ocurren anualmente debido a quemaduras. En países con desarrollo medio y bajo, las quemaduras ocupan el tercer lugar como causa de muerte accidental. [1]
- En el Perú, “entre enero y febrero del 2023, el Instituto Nacional de Salud del Niño San Borja, recibió a 75 niños con quemaduras graves, cifra que se ha incrementado en 60% en relación al mismo periodo del 2022 que atendió a 47 menores de Lima y de las diversas regiones del país” [10].
- La recuperación de una persona quemada suele llevar semanas o incluso meses, durante los cuales experimenta dolor y sufrimiento tanto físico como emocional. El tratamiento y cuidado implica costos significativos, lo que genera tanto carga para el Estado como para la familia del afectado.(Martín y Piris, 2014). La morbilidad y mortalidad aumentan por la presencia de infección y por las heridas profundas que se presentan por la pérdida de la humedad de los tejidos expuestos por la quemadura. [2]
- Por otro lado, según los diagnósticos consignados en la base de datos de HIS, se puede identificar que las localizaciones más frecuentes de quemaduras son los extremos distales de los miembros (muñecas, manos, tobillos y pies), seguida de los miembros inferiores, cabeza - cuello. [3] 
### 1.3 Contexto económico
Uno de los tratamientos para quemaduras de segundo o tercer grado son los injertos de piel; sin embargo, este procedimiento médico es complejo puesto que se extrae piel sana para poder ser injertada en la zona quemada. Esto requiere un equipo especializado y recursos médicos no precarios, lo que significa un costo adicional. 
Según el Instituto Nacional de Salud del Niño, en la siguiente tabla se muestran los costos que un paciente puede asumir. 

![image](https://github.com/JoseLuisNunezRivera/ProyectoFunBio/assets/143018549/418bde84-2bd1-4719-a990-67a97ee94830)


Los costos pueden variar mucho según la región, el sistema de salud, el tipo de tratamiento requerido y otros factores.
### 1.4 Definición del problema: 
Las quemaduras son lesiones producidas en tejido vivo, debido a la acción de agentes químicos o físicos, que provocan alteraciones que van desde un simple eritema transitorio hasta la destrucción total de las estructuras(4). 
Un aspecto importante en nuestro tema es la disponibilidad de esta tecnología en los hospitales nacionales, además del personal calificado para su correcta aplicación y desarrollo.
La capacidad del desarrollo de un prototipo y posterior bioimpresora posibilita la difusión de los beneficios de su uso, además de los costos que puede llegar a reducir. Sumado a esto, se obtendrá una mejor y óptima recuperación de nuestros usuarios.



![image](https://github.com/JoseLuisNunezRivera/ProyectoFunBio/assets/143018549/b35b7761-393f-4b75-9cef-987a53142c54)

# Estado del arte 

## Productos comerciales

| Nombre | Características |
| ------ | --------------- |
| Biopen | El sistema Biopen incluye un sistema de extrusión motorizado, un cartucho de biotinta, una boquilla y una unidad de fotocurado. Con su unidad de luz visible reemplazable, permite reticular hidrogeles con diferentes fotoiniciadores. Con su sistema de extrusión ajustable, puede realizar bioimpresiones compatibles con las células y permite que el hidrogel cargado de células se imprima a la velocidad deseada en el cartucho. Fuente de fotocurado: LED de luz visible. Peso: 700 g. Velocidad de extrusión: 5 - 35 mm/min |


## Patentes de invención y/o utilidad



# Lista de requerimientos

|Funcionales: ¿Qué es lo que el diseño debe hacer? |
|---------------------------------------------------|
|- Controlar el proceso de extrusión de material a una velocidad constante|
|- Funcionar por largos periodos de tiempo sin necesidad de ser alimentado por una fuente externa|
|- Mantener una temperatura constante que permita la preservación de las células durante la aplicación. |

| No funcionales: ¿Cuáles son las propiedades del diseño? |
|---------------------------------------------------------|
|- Ser asequible y accesible para hospitales y clínicas médicas.|
|- Ser portátil  y capaz de ser transportado fácilmente|
|- Carcasa exterior ergonómico y antideslizante|




# Planteamiento de la solución



## Bibliografía 
1. Organización Mundial de la Salud. (2018). Quemaduras: Datos y cifras. https://www.who.int/es/news-room/fact-sheets/detail/burns
2. PIEL DE CERDO LIOFILIZADA EN TRATAMIENTO DE QUEMADURAS: SERIE DE CASOS 2014-2016 https://revistas.uss.edu.pe/index.php/tzh/article/view/1329/1267
3. Ministerio de Salud. (2020). Lineamiento para la prevención y atención integral de personas con lesiones por quemaduras. https://cdn.www.gob.pe/uploads/document/file/1400166/RM%20883-2020-MINSA.PDF.PDF 
4. Tian H, Wang L, Xie W, Shen C, Guo G, Liu J, Han C, Ren L, Liang Y, Tang Y, Wang Y, Yin M, Zhang J, Huang Y. Epidemiologic and clinical characteristics of severe burn patients: results of a retrospective multicenter study in China, 2011-2015. Burns Trauma. 2018 May 23;6:14. Disponible en: https://pubmed.ncbi.nlm.nih.gov/29850643/  
5. Biopen (handheld bioprinter) [Internet]. Adbioink. [citado el 30 de agosto de 2023]. Disponible en: https://www.adbioink.com/product/biopen-handheld-bioprinter/
6. Sciencedirectassets.com. [citado el 30 de agosto de 2023]. Disponible en:
In situ 3D bioprinting: A promising technique in advanced biofabrication strategies (sciencedirectassets.com)
7. MacAdam A, Chaudry E, McTiernan CD, Cortes D, Suuronen EJ, Alarcon EI. Development of in situ bioprinting: A mini review. Front Bioeng Biotechnol [Internet]. 2022 [citado el 30 de agosto de 2023];10. Disponible en: https://pubmed.ncbi.nlm.nih.gov/35935512/
8. Varkey M, Visscher DO, van Zuijlen PPM, Atala A, Yoo JJ. Skin bioprinting: the future of burn wound reconstruction? Burns Trauma [Internet]. 2019 [citado el 30 de agosto de 2023];7. Disponible en: https://pubmed.ncbi.nlm.nih.gov/30805375/
9. Peck MD. Epidemiology of burns throughout the world. Part I: Distribution and risk factors. Burns [Internet]. 2011;37(7):1087–100. Disponible en: https://www.sciencedirect.com/science/article/pii/S0305417911001914 
10. INSN SAN BORJA: CASOS DE NIÑOS QUEMADOS SE INCREMENTA EN 60% EN LO QUE VA DE ESTE AÑO 2023 [Internet]. Gob.pe. [citado el 30 de agosto de 2023]. Disponible en: https://www.insnsb.gob.pe/blog/2023/03/10/insn-san-borja-casos-de-ninos-quemados-se-incrementa-en-60-en-lo-que-va-de-este-ano-2023/ 
11. INSN SAN BORJA SALVA VIDA DE PACIENTES CON EXTENSAS QUEMADURAS CON APLICACIÓN DE PIEL CULTIVADA [Internet]. Gob.pe. [citado el 30 de agosto de 2023]. Disponible en: https://www.insnsb.gob.pe/blog/2016/04/27/insn-san-borja-salva-vida-de-pacientes-con-extensas-quemaduras-con-aplicacion-de-piel-cultivada/ 
12. Chau Ramos EA, Hospital María Auxiliadora, Unidad de Cirugía Plástica. Lima, Perú. Evaluación de cicatrización en zonas donantes de injerto de piel parcial con uso de Xenoinjerto en comparación con sustituto dérmico. Horiz méd [Internet]. 2019 [citado el 30 de agosto de 2023];19(3):20–6. Disponible en: https://www.horizontemedico.usmp.edu.pe/index.php/horizontemed/article/view/1070
13. Tejido humano en impresora 3D. M. Juste. [Internet]. 2017 [citado el 31 de agosto de 2023]. Disponible en: https://www.expansion.com/economia-digital/innovacion/2017/07/31/5979fa8e268e3e774b8b45b2.html
14. Gathering for Open Science Hardware. Why GOSH? - gathering for open science hardware [Internet]. Gathering for Open Science Hardware - Gathering for Open Science Hardware. 2021. Disponible en: https://openhardware.science/about/why-gosh/
 











