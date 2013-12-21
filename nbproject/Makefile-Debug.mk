#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Archer.o \
	${OBJECTDIR}/Attaque.o \
	${OBJECTDIR}/AttaqueDeBase.o \
	${OBJECTDIR}/Batiment.o \
	${OBJECTDIR}/BatimentBonusStat.o \
	${OBJECTDIR}/Case.o \
	${OBJECTDIR}/Chateau.o \
	${OBJECTDIR}/Chevalier.o \
	${OBJECTDIR}/Effet.o \
	${OBJECTDIR}/Entite.o \
	${OBJECTDIR}/Guerrier.o \
	${OBJECTDIR}/Jeux.o \
	${OBJECTDIR}/Joueur.o \
	${OBJECTDIR}/Magicien.o \
	${OBJECTDIR}/Plateau.o \
	${OBJECTDIR}/PointDeVie.o \
	${OBJECTDIR}/Pretre.o \
	${OBJECTDIR}/Sort.o \
	${OBJECTDIR}/Tour.o \
	${OBJECTDIR}/Unite.o \
	${OBJECTDIR}/Voleur.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeux-str

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeux-str: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeux-str ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Archer.o: Archer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Archer.o Archer.cpp

${OBJECTDIR}/Attaque.o: Attaque.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Attaque.o Attaque.cpp

${OBJECTDIR}/AttaqueDeBase.o: AttaqueDeBase.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AttaqueDeBase.o AttaqueDeBase.cpp

${OBJECTDIR}/Batiment.o: Batiment.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Batiment.o Batiment.cpp

${OBJECTDIR}/BatimentBonusStat.o: BatimentBonusStat.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BatimentBonusStat.o BatimentBonusStat.cpp

${OBJECTDIR}/Case.o: Case.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Case.o Case.cpp

${OBJECTDIR}/Chateau.o: Chateau.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chateau.o Chateau.cpp

${OBJECTDIR}/Chevalier.o: Chevalier.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chevalier.o Chevalier.cpp

${OBJECTDIR}/Effet.o: Effet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Effet.o Effet.cpp

${OBJECTDIR}/Entite.o: Entite.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Entite.o Entite.cpp

${OBJECTDIR}/Guerrier.o: Guerrier.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Guerrier.o Guerrier.cpp

${OBJECTDIR}/Jeux.o: Jeux.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Jeux.o Jeux.cpp

${OBJECTDIR}/Joueur.o: Joueur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Joueur.o Joueur.cpp

${OBJECTDIR}/Magicien.o: Magicien.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Magicien.o Magicien.cpp

${OBJECTDIR}/Plateau.o: Plateau.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Plateau.o Plateau.cpp

${OBJECTDIR}/PointDeVie.o: PointDeVie.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PointDeVie.o PointDeVie.cpp

${OBJECTDIR}/Pretre.o: Pretre.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pretre.o Pretre.cpp

${OBJECTDIR}/Sort.o: Sort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sort.o Sort.cpp

${OBJECTDIR}/Tour.o: Tour.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tour.o Tour.cpp

${OBJECTDIR}/Unite.o: Unite.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Unite.o Unite.cpp

${OBJECTDIR}/Voleur.o: Voleur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Voleur.o Voleur.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/jeux-str

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
