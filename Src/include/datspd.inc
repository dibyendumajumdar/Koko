C///////////////////////////////////////////////////////////////////////
C/
C/ Copyright (C) 2020 The Koko Project Developers
C/
C/ See the file COPYRIGHT.md in the top-level directory of this
C/ distribution
C/
C/ This file is part of Koko.
C/
C/ Koko is free software: you can redistribute it and/or modify it
C/ under the terms of the GNU General Public License as published by
C/ the Free Software Foundation, either version 3 of the License, or
C/ (at your option) any later version.
C/
C/ Koko is distributed in the hope that it will be useful, but
C/ WITHOUT ANY WARRANTY; without even the implied warranty of
C/ MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
C/ GNU General Public License for more details.
C/
C/ You should have received a copy of the GNU General Public License
C/ along with Koko; see the file COPYING.  If not, see
C/ <https://www.gnu.org/licenses/>.
C/
C///////////////////////////////////////////////////////////////////////

C       SPOT DIAGRAM COMMONS
C
C       SPOT DIAGRAM STORAGE
      REAL*8
     2SPA,SPB,SPC,SPD,AFSPB,AFSPD,SSSP,SSSQ,SSSR,LA,LB,LC,LD
     3,ASSSP,ASSSQ,ASSSR,AFLB,AFLD,REDVLX,REDVLY,SPE,SPF,AFSPF
     4,LE,LF,AFLF,SHRTWAVE,WVSHORT,GRI,NRDFACTOR,NNRD
C
      INTEGER NRD,OPNRD,TOLNRD,TGR,PGR,TGRFLG,NRDFLG,GRIFLG
C
      COMMON/NRDNRD/OPNRD,TOLNRD,TGR,PGR,NRDFLG,TGRFLG,GRIFLG,GRI,NRD
     1,NRDFACTOR,NNRD
C
C     THESE NEXT 6 VARIABLES TRACK STATUS OF FIELD,RAY,CFG,SPDEXT
C     CPFNEXT AND ZERNIKE FIT
C     FOR PREDEFINED OPERANDS TO MINIMIZE EXCESSIVE RAY TRACING
      INTEGER OLDF,OLDW,OLDLAMM,OLDR,OLDCFG
C
      LOGICAL OLDCSPD,OLDGSPD,OLDSPD,OLDCPFN,OLDZRNFT,GAUSSAP
C
      COMMON/OLDIES1/OLDF,OLDW,OLDLAMM,OLDR,OLDCFG,GAUSSAP
C
      COMMON/OLDIES2/OLDCSPD,OLDGSPD,OLDSPD,OLDCPFN,OLDZRNFT
C
      LOGICAL MSGSPD
      COMMON/SPDMES/MSGSPD
C
      INTEGER MAXGRD,IWIW,NUMTOT,REDV1,IRED,NFAIL,ILSF,SHORT,NUMCOL
     1,IW,NUMBEROF
C
      COMMON/NCOLL/SHORT,NUMCOL,SHRTWAVE,WVSHORT
C
      INTEGER FALFAL(0:499)
C
      COMMON/LAFLAF/FALFAL
C
C       MAXGRD SET TO THE SQUARE ROOT OF THE DSPOT1 FIRST DIM
C       UPPER LIMIT IN PROGRAM.FOR
C
      COMMON/IDSPOT/MAXGRD
C
      COMMON/REDCOM/REDVLX,REDVLY,REDV1,IRED,NFAIL,ILSF,NUMBEROF
C
      COMMON/SPABCD/SPA,SPB,SPC,SPD,SSSP,SSSQ,SSSR,LA,LB,LC,LD
     1,ASSSP,ASSSQ,ASSSR,AFSPB,AFSPD,AFLB,AFLD,SPE,SPF,AFSPF
     2,LE,LF,AFLF
C
      REAL*8 SSSPX,SSSQX,SSSRX,SSSPY,SSSQY,SSSRY
     1,ASSSPX,ASSSQX,ASSSRX,ASSSPY,ASSSQY,ASSSRY
     2,RMS,RMSX,RMSY,CENTX,CENTY,RSS,RSSX,RSSY
C
      COMMON/GETSPD/RMS,RMSX,RMSY,CENTX,CENTY,RSS,RSSX,RSSY
C
      COMMON/SPXY/SSSPX,SSSPY,SSSQX,SSSQY,SSSRX,SSSRY,ASSSPX
     1,ASSSPY,ASSSQX,ASSSQY,ASSSRX,ASSSRY
C
      COMMON/IWIWIW/IWIW,NUMTOT,IW
C
C     SPOT DIAGRAM OPD VARIABLES
C
      REAL*8 OOPD,OPDW,RMSOPD,PTOVOPD(0:10),RMSOP(0:10)
C
      COMMON/SPDOPD/OOPD,OPDW,RMSOPD,PTOVOPD,RMSOP
C
      INTEGER SPACEBALL
C
      COMMON/YOGURT/SPACEBALL
C
      LOGICAL SPOTSSI,DETER,DETCENT,DETCHIEF,SPDCENT,SPDCHIEF
C
C     SPOTSSI IS TRUE IF SSI EXPLICITYL SET, ELSE FALSE
C     DETER IS TRUE IF DET ON ELSE FALSE IF OFF
C     DETCENT=TRUE IF CENT     DET
C     DETCHIEF=TRUE IF CHIEF   DET
C     SPDCENT=TRUE IF CENT     SPOT
C     SPDCHIEF=TRUE IF CHIEF   SPOT
C
      COMMON/SPOTTI/SPOTSSI,DETER,DETCENT,DETCHIEF,SPDCHIEF,SPDCENT
C
C     DETTX IS X DIM
C     DETTY IS Y DIM
C     DETDELX IS X OFFSET
C     DETDELY IS Y OFFSET
C     DETTHETA ID ANGLE
C
      REAL*8 DETDIAM,DETTX,DETTY,DETDELX,DETDELY,DETTHETA
     1,SPDSSIVAL
C
      INTEGER DETTYP
C
      COMMON/SPOTTI2/DETDIAM,DETTX,DETTY,DETDELX,DETDELY,DETTHETA
     1,DETTYP
      COMMON/SPOTTI3/SPDSSIVAL
C
      LOGICAL PSFWRITE,PSFPLOT,ROTPSF,ROTCAPFN,PSFHC,PSFBIN
C
      COMMON/PSFWRT/PSFWRITE,PSFPLOT,ROTPSF,ROTCAPFN,PSFHC,PSFBIN
C
      CHARACTER PSFTAG*12,PSFLI*80,CAPFNTAG*12,CAPFNLI*80
C
      COMMON/TAGPSF/PSFTAG,PSFLI,CAPFNTAG,CAPFNLI
C
C     PSF STREAK SETTINGS
      LOGICAL STKPLT,STKWRT
      INTEGER STREAKIT
      COMMON/STREAKER/STKPLT,STKWRT,STREAKIT
C
      REAL*8 CENTERVAL
C
      COMMON/VALCENTER/CENTERVAL
C
      REAL*8 RSTREHL
      LOGICAL DOSTREHL,RSTREHL_EXIST
      COMMON/STREHLDO/DOSTREHL,RSTREHL_EXIST,RSTREHL
C
C     TRACKS NUMBER OF OTF DATA PAIRS TO BE PLOTTED
C     MAX IS 6 (FIRST PAIR WHEN MULTIPLE PAIRS ARE DONE
C     IS DIFFRACTION LIMIT
      INTEGER OTFPAIR
      COMMON/PAIROTF/OTFPAIR
C
      REAL*8 CAPDEF
      COMMON/DEFCAP/CAPDEF
      REAL*8 OLDSP(1:10)
      COMMON/SPOLD/OLDSP
C
C     TILT REMOVAL FROM WAVEFRONT
      REAL*8 DLLX,DLLY,DLLZ,RREF,LAMAVE
      COMMON/TILWAVE/DLLX,DLLY,DLLZ,RREF,LAMAVE
C
      INTEGER ONRD, OPGR, OTGR
      REAL*8 OGRI
      COMMON/OLDPSF/ONRD,OPGR,OTGR,OGRI
C
      LOGICAL MFREQ
      COMMON/MFREQOTF/MFREQ
      INTEGER PSFLIN,PSFLOG
      COMMON/PSFLOGLIN/PSFLIN,PSFLOG
C
      LOGICAL NEAR
C
      COMMON/FREQNEAR/NEAR
C
      LOGICAL DLEICA(0:10),GLEICA(1:10)
      COMMON/LEICASKIP/DLEICA,GLEICA
C
      REAL*8 COHERENCE_FACTOR
      COMMON/FACTCOHER/COHERENCE_FACTOR
      REAL*8 SPDTRANS,JK_TRANS
      COMMON/TRANSPASS/JK_TRANS,SPDTRANS
C
C       FLAG FOR CAPFN PERFECT 10/9/2002
      LOGICAL PERFECT,NOOB
      COMMON/PERFPERF/PERFECT,NOOB
C
      INTEGER SPDSURF
      COMMON/ALTSPDSURF/SPDSURF