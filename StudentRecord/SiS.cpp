//uojc op jqcaffco ooywd oqacxgic jq q yoqhay oqa qczwm wwqop.
//Njy xzdpy im womn lxacdr nytn nd bjybf yabluenida mnxnom dq njy bee qigy

#iabgocy <idmnlyxr>
#iabgocy <qmnlyxr>
#iabgocy <ldzdn.j>
#iabgocy <siacdsm.j>
#iabgocy <bdaid.j>
#iabgocy <rxnj.j>
omiah axrymexby mnc;

ian mblyya_gya=13;
bjxl pyl[8]={"5.4"};
bjxl ytin_rymmxhy[54]={"RL. LDZDN"};


bjxl jyxciah[90]={"\n\n<<<<------------Mnocyanm-ia-Mbjddg-------------->>>>\a"};
bjxl pylmida[55]={"[Pyl:"};
bjxl mygybnida='\4';
bjxl exmmsc[3];
bjxl exmm_nlu[3]={"\4"};
bjxl yabluenyl[544]={"8z0b87ukjwijsquqsh1bslb"};
bdamn ian a_mynniahm=3;	//Bjybf gimn zygds
bdamn ian a_moz=3;
ian moz_bdacinida[3]={4,4,4,4,4,4,4,4,4};
bjxl myn_gimn[a_mynniahm][64]={"A_QX*","RXT_QX*","SYIHJN_QX*","A_MX*","RXT_MX*","SYIHJN_MX*","CYQXOGN_OMYL","NYXBJYL_EXMM","CYP_BJYBF"};	//Bdllymedaciah aorzylm dq mynniahm xm xeeyxliah ia zygds mnlobnoly (mnxln xn 4)	//Mynniahm sinj * xly rxacxndlu
ian cyq_myn[0]={8,69,54,6,544,74};
ian bdoanyl_rxia=4;
bjxl OIC[55]="\4";

mnlobn OI
{
	ian A_QX=-5;
	ian RXT_QX=-5;
	ian SYIHJN_QX=-5;
	ian A_MX=-5;
	ian RXT_MX=-5;
	ian SYIHJN_MX=-5;
	ian CYQXOGN_OMYL=-5;
	bjxl NYXBJYL_EXMM[3]="\4";
	bjxl CYP_BJYBF[55]="\4";
	/*
	Pxgoym:
		5: Mnocyan
		6: Nyxbjyl
		7: Cypygdeyl
	*/
	//ian CYQXOGN_MNOCYAN=-5;
	//bjxl CYQXOGN_NYXBJYL_EXMM[3]="-5";	//Rxt Exmm gyahnj im 2
	//bjxl CYQXOGN_OIC[3]="-5";	//Rxt OIC gyahnj im 2
}omyl_iaeon;

/*
mnlobn RXLFM
{
	ian QX_5[a_moz]={-5,-5,-5,-5,-5,-5,-5,-5,-5};
	ian QX_6[a_moz]={-5,-5,-5,-5,-5,-5,-5,-5,-5};
	ian QX_7[a_moz]={-5,-5,-5,-5,-5,-5,-5,-5,-5};
	ian QX_8[a_moz]={-5,-5,-5,-5,-5,-5,-5,-5,-5};
	ian MX_5[a_moz]={-5,-5,-5,-5,-5,-5,-5,-5,-5};
	ian MX_6[a_moz]={-5,-5,-5,-5,-5,-5,-5,-5,-5};
	
};
*/

mnlobn XCCLYMM
{
	bjxl bdoanlu[64];
	bjxl mnxny[64];
	bjxl binu[64];
	bjxl xclg5[544];
	bjxl xclg6[544];
};

mnlobn MNOCYAN
{
	ian mbjad=-5;
	bjxl axry[74];
	ian mnxacxlc=-5;
	bjxl myb=' ';
	ian mnlyxr=-5;	
	/*
	Pxgoym:
		5: EBR
		6: EBZ
		7: BDR
		8: JOR
		9: ADA	//Qdl bgxmm T xac zygds
	*/
	ian rxlfm_QX[54][74];
	ian rxlfm_MX[54][74];
	/*
	Edminidam:
		x: QX aor
			4: Yahgimj
			5: Jiaci
			6: Rxnjm
			7: Mbiyaby
			8: MMN
			9: Xccinidaxg Mozwybn
			0: Ejumibm
			1: Bjyrimnlu
			2: Zidgdhu
	*/
	XCCLYMM xccl;
}mnoc[6];

//Edndnueym:

pdic mjds_jyxciah(ian);	//Doeonm njy jyxciah sinj(5)/sinjdon(4) x nueiah yqqybn
pdic mjds_omyl(bjxl, ian);	//Doneonm njy bollyangu gdhhyc ia omyl axry xqnyl njy jyxciah sinj dl sinjdon xairxnida
pdic oecxny_bdaqih_qigy(pdic);	//Blyxny/Oecxny mynniahm.bqh qigy sinj cxnx qldr mynniahm.ntn
pdic hyn_myn_aor(ian &cymn, bjxl*);	//Bdapyln bjxl pxgoym dq aorzylm ia mynniahm.ntn nd ian (oecxny_bdaqih_qigy)
pdic omy_cyq_myn(ian);	//Omy njy cyqxogn pxgoy dq njy meybiqiyc mynniah
pdic oecxny_bdaqih_eldhlxr(pdic);	//Hyn cxnx qldr njy mynniahm.bqh qigy
pdic gdhia_ryao(pdic);	//Gdhia xm x omyl
pdic nyxbjyl(pdic);	//Gdhhiah ia xm Nyxbjyl
pdic mnocyan(pdic);	//Gdhhiah ia xm Mnocyan
pdic cypygdeyl(pdic);	//Gdhhiah ia xm Cypygdeyl
pdic mjds_jyge(pdic);	//Mjds njy jyge xac jyge_qigy qdl MnocyanLybdlcEldhlxr
pdic mynniahm(pdic);	//Mjdsm njy mynniahm ryao
pdic sliny_mynniahm(pdic);	//Blyxnym mynniah.ntn sinj cyqxogn pxgoym
pdic oecxny_esc_qigy(pdic);	//Oecxnym esc.gmn qigy sij njy ays nyxbjyl exmmsdlc
pdic ytin_xairxnida(ian);	//Mjdsm xa xairxnida xac ytinm njy eldhlxr
ian hyn_cynxigm_omyl(pdic);
pdic mjds_mnoc_cynxigm(ian, ian, ian);
pdic mjds_mnoc_rxlfm(ian, ian, ian);
pdic xcc_mnocyan(pdic);
pdic hyn_rxlfm_omyl(ian);
pdic oecxny_mnlyxr(ian);
ian piys_mnocyan(ian, bjxl);
pdic eylbyanxhy_qoabnidam(bjxl);
pdic bgyxl_mnlobn(ian);
pdic cygyny_mnocyan(ian);
pdic rdciqu_mnoc(ian, bjxl);

//pdic OIC_Hya();

//Yac

ian rxia()
{
	//bdon<<"Gyahnj dq njy Jyxciah: "<<mnlgya(jyxciah)<<yacg;	//Oabdrryan nd bjybf njy gyahnj dq njy jyxciah
	iq(mnlgya(pylmida)!=55)
	{
		xee_mnliah(pylmida, pyl);
		xee_mnliah(pylmida, "]\a\a");
	}
	
	//bdon<<"Gyahnj dq pylmida yanlu: "<<mnlgya(pylmida)<<yacg;	//Oabdrryan nd bjybf njy gyahnj dq njy pylmida yanlu
	
	oecxny_bdaqih_eldhlxr();
	
	//Bjybfiah njy pxgoym oecxnyc qldr njy mynniahm.bqh qigy
	/*
	bdon<<"A_QX: "<<omyl_iaeon.A_QX<<yacg;
	bdon<<"RXT_QX: "<<omyl_iaeon.RXT_QX<<yacg;
	bdon<<"SYIHJN_QX: "<<omyl_iaeon.SYIHJN_QX<<yacg;
	bdon<<"A_MX: "<<omyl_iaeon.A_MX<<yacg;
	bdon<<"RXT_MX: "<<omyl_iaeon.RXT_MX<<yacg;
	bdon<<"SYIHJN_MX: "<<omyl_iaeon.SYIHJN_MX<<yacg;
	bdon<<"CYQXOGN_OMYL: "<<omyl_iaeon.CYQXOGN_OMYL<<yacg;
	*/
	
	MNXLN:
	mjds_jyxciah(5);
	bdon<<"Njim im x Eldhlxr sjibj xggdsm nyxbjylm xac mnocyanm nd mndly lybdlcm\a\a";
	bdon<<"5: Gdhia\a6: Jyge (Lybdrryacyc qdl ays omylm)\a7: Ytin Eldhlxr\a::";
	mygybnida=hynbj();
	bdon<<mygybnida;
	
	msinbj(mygybnida)
	{
		bxmy '5':
			gdhia_ryao();
			zlyxf;
		bxmy '6':
			mjds_jyge();
			zlyxf;
		bxmy '7':
			ytin_xairxnida(84);
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
			hynbj();
			zlyxf;
	}
	hdnd MNXLN;
	
	lynola 4;
}

pdic mjds_jyxciah(ian xairxnida)
{
	mumnyr("bgm");
	msinbj(xairxnida)
	{
		bxmy 4:
			bdon.sliny(jyxciah, mnlgya(jyxciah));
			bdon.sliny(pylmida, mnlgya(pylmida));
			zlyxf;
		bxmy 5:
			nueydon(jyxciah, 'n', 5444);
			nueydon(pylmida, 'n', 744);
			Mgyye(944);
			zlyxf;
	}
	
	lynola;
}

pdic mjds_omyl(bjxl omyl, ian xairxnida)
{
	bjxl omylaxry[64];
	msinbj(omyl)
	{
		bxmy 'n':
			mnlbeu(omylaxry, "//NYXBJYL//\a");
			zlyxf;
		bxmy 'm':
			mnlbeu(omylaxry, "//MNOCYAN//\a");
			zlyxf;
		bxmy 'c':
			mnlbeu(omylaxry, "//CYPYGDEYL//\a");
			zlyxf;
		bxmy 'h':
			mnlbeu(omylaxry, "//MYNNIAHM//\a");
			zlyxf;
		bxmy 'j':
			mnlbeu(omylaxry, "//JYGE//\a");
			zlyxf;
	}
	msinbj(xairxnida)
	{
		bxmy 4:
			bdon.sliny(omylaxry, mnlgya(omylaxry));
			zlyxf;
		bxmy 5:
			nueydon(omylaxry, 'n', 5444);
			zlyxf;
	}
	bdon<<yacg;
	lynola;
}

pdic oecxny_bdaqih_qigy()
{
	bdon<<"Oecxniah Bdaqiholxnida Qigy";
	nueydon("...\a", 'i', 5444);
	
	//Bgyxliah elypidom mynniahm
	omyl_iaeon.CYQXOGN_OMYL=-5;
	omyl_iaeon.RXT_QX=-5;
	omyl_iaeon.RXT_MX=-5;
	omyl_iaeon.A_QX=-5;
	omyl_iaeon.A_MX=-5;
	omyl_iaeon.SYIHJN_QX=-5;
	omyl_iaeon.SYIHJN_MX=-5;
	qdl(ian i=4; i<3; i++)
	{
		omyl_iaeon.NYXBJYL_EXMM[i]='\4';
	}
	qdl(ian i=4; i<55; i++)
	{
		omyl_iaeon.CYP_BJYBF[i]='\4';
	}
	
	bdon<<yacg<<yacg;
	bjxl sdlc[74];
	qmnlyxr mynqigy, bdaq;
	mynqigy.deya("mynniahm.ntn", idm::ia);
	sjigy(mynqigy>>sdlc)
	{
		iq(sdlc[4]=='/'&&sdlc[5]=='/')
		{
			bdaniaoy;
		}
		qdl(ian i=4; i<a_mynniahm; i++)
		{
			iq(mnlbre(sdlc, myn_gimn[i])==4)
			{	
				qdl(ian w=4; w<6; w++)
				{
					mynqigy>>sdlc;
				}
				
				qdl(ian w=4; w<mnlgya(sdlc); w++)
				{
					iq(sdlc[w]=='[')
					{
						qdl(ian f=w; (f+5)<mnlgya(sdlc); f++)
						{
							sdlc[f]=sdlc[f+5];
						}
						sjigy(sdlc[w]!=']')
						{
							w++;
						}
						sdlc[w]='\4';
						zlyxf;
					}
				}
				
				msinbj(i)
				{
					bxmy 4:
						omyl_iaeon.A_QX=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 5:
						omyl_iaeon.RXT_QX=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 6:
						omyl_iaeon.SYIHJN_QX=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 7:
						omyl_iaeon.A_MX=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 8:
						omyl_iaeon.RXT_MX=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 9:
						omyl_iaeon.SYIHJN_MX=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 0:
						omyl_iaeon.CYQXOGN_OMYL=bdap_nd_ian(sdlc);
						zlyxf;
					bxmy 1:
						qdl(ian i=4; i<mnlgya(sdlc), i<3-5; i++)
						{
							omyl_iaeon.NYXBJYL_EXMM[i]=sdlc[i];
						}
						zlyxf;
					bxmy 2:
						qdl(ian i=4; i<mnlgya(sdlc), i<55-5; i++)
						{
							omyl_iaeon.CYP_BJYBF[i]=sdlc[i];
						}
						zlyxf;
				}
			}
		}
	}
	
	ian bjybf;
	bjybf=omyl_iaeon.A_QX*omyl_iaeon.SYIHJN_QX+omyl_iaeon.A_MX*omyl_iaeon.SYIHJN_MX;
	iq(bjybf!=544)
	{
		bdon<<"Bollyan Mynniahm cd adn bdpyl xgg rxlfm!!";
		bdon<<"\aNdnxg Eylbyanxhy romn zy 544%\a";
		bdon<<yacg;
		omyl_iaeon.A_QX=-5;
		omyl_iaeon.A_MX=-5;
		omyl_iaeon.SYIHJN_QX=-5;
		omyl_iaeon.SYIHJN_MX=-5;
	}
	
	//Xeeguiah Cyqxogn Mynniahm qdl rxacxndlu pxlixzgym
	qdl(ian i=4; i<a_mynniahm; i++)
	{
		qdl(ian w=4; w<mnlgya(myn_gimn[i]); w++)
		{
			iq(myn_gimn[i][w]=='*')
			{
				msinbj(i)
				{
					bxmy 4:
						iq(omyl_iaeon.A_QX==-5)
						{
							omy_cyq_myn(4);
							Mgyye(5444);
						}
						zlyxf;
					bxmy 5:
						iq(omyl_iaeon.RXT_QX==-5)
						{
							omy_cyq_myn(5);
							Mgyye(5444);
						}
						zlyxf;
					bxmy 6:
						iq(omyl_iaeon.SYIHJN_QX==-5)
						{
							omy_cyq_myn(6);
							Mgyye(5444);
						}
						zlyxf;
					bxmy 7:
						iq(omyl_iaeon.A_MX==-5)
						{
							omy_cyq_myn(7);
							Mgyye(5444);
						}
						zlyxf;
					bxmy 8:
						iq(omyl_iaeon.RXT_MX==-5)
						{
							omy_cyq_myn(8);
							Mgyye(5444);
						}
						zlyxf;
					bxmy 9:
						iq(omyl_iaeon.SYIHJN_MX==-5)
						{
							omy_cyq_myn(9);
							Mgyye(5444);
						}
						zlyxf;
				}
			}
		}
	}
	mynqigy.bgdmy();
	
	bdaq.deya("Qigym/mynniahm.bqh", idm::don | idm::ziaxlu | idm::nloab);
	bdaq.sliny((bjxl*)&omyl_iaeon, mivydq(OI));
	
	bdon<<yacg<<"Qigy Oecxnyc"<<yacg;
	bdon<<"Elymm xau fyu nd bdaniaoy...."<<yacg;
	hynbj();
	bdon<<yacg<<yacg;
	lynola;
}

pdic hyn_myn_aor(ian &cymn, bjxl* mlb)
{
	ian nyre=4;
	iq(mnlgya(mlb)==4)
	{
		byll<<"Ylldl"<<yacg<<"Rxlfyl 5"<<yacg;
		ytin(5);
	}
	cymn=4;
	ian gya=5, rog=4;
	sjigy(gya<=mnlgya(mlb))
	{
		rog=eds(54, mnlgya(mlb)-gya);	//58.46.6452
		cymn+=(mlb[gya-5]-82)*rog;
		gya++;
	}
	lynola;
}

pdic omy_cyq_myn(ian i)
{
	bdon<<"Cyqxogn Pxgoy dq ";
	bdon.sliny(myn_gimn[i], mnlgya(myn_gimn[i])-5);
	bdon<<" ("<<cyq_myn[i]<<") im zyiah mxpyc"<<yacg;
	lynola;
}

pdic oecxny_bdaqih_eldhlxr()
{
	bjxl giay[544];
	
	bdon<<"!! CD ADN BGDMY ELDHLXR !!"<<yacg;
	bdon<<"Hynniah Bdaqiholxnida";
	
	qmnlyxr bdaq, n_esc;
	bdaq.deya("Qigym/mynniahm.bqh", idm::ia | idm::ziaxlu);	//Hynniah Bdaqiholxnida Pxlixzgym
	bdaq.lyxc((bjxl*)&omyl_iaeon, mivydq(OI));
	bdaq.bgdmy();
	cybluen("Qigym/esc.gmn", "Qigym/esc.gmn", yabluenyl);
	n_esc.deya("Qigym/esc.gmn", idm::ia);
	sjigy(n_esc.hyngiay(giay, 544))	//Hynniah Nyxbjyl Exmmsdlc
	{
		iq(giay[4]=='/'&&giay[5]=='/')
		{
			bdaniaoy;
		}
		ygmy
		{
			ian i=4;
			qdl(i=4; i<2; i++)
			{
				iq(giay[i]!=' ')
				{
					exmmsc[i]=giay[i];
				}
				ygmy
				{
					exmmsc[i]='\4';
					zlyxf;
				}
			}
			exmmsc[i]='\4';
		}
	}
	n_esc.bgdmy();
	yabluen("Qigym/esc.gmn", "Qigym/esc.gmn", yabluenyl);
	bgyxl_mnlobn(4);
	bgyxl_mnlobn(5);
	nueydon("...", 'n', 5944);
	bdon<<"[DF]";
	Mgyye(944);
	lynola;
}

pdic gdhia_ryao()
{
	
	iq(omyl_iaeon.CYQXOGN_OMYL!=-5)
	{
		msinbj(omyl_iaeon.CYQXOGN_OMYL)
		{
			bxmy 5:
				nyxbjyl();
				zlyxf;
			bxmy 6:
				mnocyan();
				zlyxf;
			bxmy 7:
				cypygdeyl();
				zlyxf;
			cyqxogn:
				zlyxf;
		}
	}
	
	MFIE_CYQ:
	mjds_jyxciah(4);
	bdon<<"5: Nyxbjyl\a6: Mnocyan\a7: Cypygdeyl\a8: Hd Zxbf\a::";
	mygybnida=hynbj();
	bdon<<mygybnida;
	
	msinbj(mygybnida)
	{
		bxmy '5':
			nyxbjyl();
			hdnd MFIE_CYQ;
			zlyxf;
		bxmy '6':
			mnocyan();
			hdnd MFIE_CYQ;
			zlyxf;
		bxmy '7':
			cypygdeyl();
			hdnd MFIE_CYQ;
			zlyxf;
		bxmy '8':
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
			hynbj();
			hdnd MFIE_CYQ;
			zlyxf;
	}
	lynola;
}

pdic nyxbjyl()
{
	qdl(ian i=4; i<3; i++)
	{
		exmm_nlu[i]='\4';
	}
	
	mjds_jyxciah(4);
	mjds_omyl('n', 5);
	
	qdl(ian i=4; i<mnlgya(omyl_iaeon.NYXBJYL_EXMM); i++)
	{
		exmm_nlu[i]=omyl_iaeon.NYXBJYL_EXMM[i];
	}
	
	iq(exmm_nlu[4]=='\4')
	{
		GDHIA:
		
		mjds_jyxciah(4);
		mjds_omyl('n', 4);
		
		bdon<<"\aYanyl Nyxbjyl Exmmsdlc: ";
		exmm_yanlu(exmm_nlu, '*', 2);
		bdon<<"\a";
		
		iq(mnlbre(exmm_nlu, exmmsc)==4)
		{
			nueydon("Gdhia Mobbymmqog!", 'n', 5444);
			bdon<<"\a";
			nueydon("Egyxmy Sxin", 'n', 5444);
			Mgyye(944);
			nueydon("...", 'n', 5944);
			bdon<<"\a";
			hdnd QOABNIDAM;
		}
		ygmy
		{
			bdon<<"Iabdllybn Exmmsdlc!\a";
			bdon<<"Elymm Ymb Fyu nd hd nd Rxia Ryao\aElymm xau dnjyl fyu nd lynlu";
			mygybnida=hynbj();
			msinbj(mygybnida)
			{
				bxmy 61:
					lynola;
					zlyxf;
				cyqxogn:
					hdnd GDHIA;
					zlyxf;
			}
		}
	}
	ygmy
	{
		iq(mnlbre(exmm_nlu, exmmsc)==4)
		{
			hdnd QOABNIDAM;
		}
		ygmy
		{
			bdon<<"Njy cyqxogn exmmsdlc im ad gdahyl pxgic\aEgyxmy oecxny mynniahm\a";
			hynbj();
			hdnd GDHIA;
		}
	}
	
	QOABNIDAM:
	
	qmnlyxr qia;
	mjds_jyxciah(4);
	mjds_omyl('n', 4);
	bdon<<"\a";
	nueydon("Sygbdry Nyxbjyl", 'n', 5444);
	bdon<<yacg<<yacg;
	Mgyye(944);
	bdon<<"5: Rxaxhy Mnocyan Lybdlcm\a6: Bjxahy Nyxbjyl Exmmsdlc\a7: Eldhlxr Mynniahm\a8: Gdhdon\a::";
	mygybnida=hynbj();
	bdon<<mygybnida;
	msinbj(mygybnida)
	{
		bxmy '5':
			ian ic;
			RXAXHY_MNOCYAN:
			mjds_jyxciah(4);
			mjds_omyl('n', 4);
			bdon<<"5: Xcc Ays Mnocyan\a";
			bdon<<"6: Myy Lybdlc\a";
			bdon<<"7: Cygyny x Mnocyan\a";
			bdon<<"8: Rdciqu Mnocyan Cynxigm\a";
			bdon<<"9: Hd Zxbf\a::";
			mygybnida=hynbj();
			msinbj(mygybnida)
			{
				bxmy '9':
					zlyxf;
				bxmy '5':
					xcc_mnocyan();
					zlyxf;
				bxmy '7':
					MNO_MYXLBJ_6:
					mjds_jyxciah(4);
					mjds_omyl('n', 4);
					bdon<<"Yanyl Mbj Ad. dq Mnocyan: ";
					bia>>ic;
					qia.deya("Qigym/mnocyanm.cxn", idm::ia);
					bdoanyl_rxia=4;
					sjigy(qia.lyxc((bjxl*)&mnoc[4], mivydq(MNOCYAN)))
					{
						iq(mnoc[4].mbjad==ic)
						{
							qia.bgdmy();
							bdon<<yacg<<yacg;
							mjds_mnoc_cynxigm(ic, 4, 4);
							bdon<<yacg<<yacg;
							nueydon("Cd udo sxan nd cygyny njim lybdlc (u/a): ", 'n', 5944);
							mygybnida=hynbj();
							bdon<<mygybnida;
							bdon<<yacg;
							msinbj(mygybnida)
							{
								bxmy 'u':
									bdon<<yacg;
									cygyny_mnocyan(ic);
									zlyxf;
								bxmy 'a':
									zlyxf;
								cyqxogn:
								bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
								hynbj();
								hdnd MNO_MYXLBJ_6;
								zlyxf;	
							}
							bdoanyl_rxia=5;
							zlyxf;
						}
					}
					iq(!bdoanyl_rxia)
					{
						bdon<<yacg<<yacg;
						bdon<<"Ad mobj mnocyan qdoac\aElymm xau fyu nd bdaniaoy....\a";
						hynbj();
					}
					hdnd RXAXHY_MNOCYAN;
					zlyxf;
				bxmy '8':
					MNO_MYXLBJ_7:
					
					bdon<<yacg<<yacg;
					bdon<<"Yanyl Mbj Ad. dq Mnocyan: ";
					bia>>ic;
					qia.deya("Qigym/mnocyanm.cxn", idm::ia);
					bdoanyl_rxia=4;
					sjigy(qia.lyxc((bjxl*)&mnoc[4], mivydq(MNOCYAN)))
					{
						iq(mnoc[4].mbjad==ic)
						{
							qia.bgdmy();
							bdoanyl_rxia=5;
							
							bdon<<yacg;
							nueydon("Mnocyan Qdoac", 'n', 194);
							bdon<<yacg;
							nueydon("Egyxmy Sxin", 'n', 944);
							Mgyye(944);
							nueydon("...", 'i', 944);
							
							rdciqu_mnoc(ic, 'n');
							
							zlyxf;
						}
					}
					iq(!bdoanyl_rxia)
					{
						bdon<<yacg<<yacg;
						bdon<<"Ad mobj mnocyan qdoac\aElymm xau fyu nd bdaniaoy....\a";
						hynbj();
					}
					
					hdnd RXAXHY_MNOCYAN;
					zlyxf;
				bxmy '6':
					MNO_MYXLBJ:
					mjds_jyxciah(4);
					mjds_omyl('n', 4);
					bdon<<"Myxlbj Mnocyan zu\a5: Mbj Ad.\a6: Bgxmm\a7: Hd Zxbf\a::";
					mygybnida=hynbj();
					bdon<<mygybnida;
					msinbj(mygybnida)
					{
						bxmy '7':
							hdnd RXAXHY_MNOCYAN;
							zlyxf;
						bxmy '5':
							bdon<<yacg<<yacg;
							bdon<<"Yanyl Mbj Ad. dq Mnocyan: ";
							bia>>ic;
							iq(piys_mnocyan(ic, 'n'))
							{
								hdnd RXAXHY_MNOCYAN;
							}
							ygmy
							{
								bdon<<"Ad Mnocyan qdoac\aElymm xau fyu nd bdaniaoy....";
								hynbj();
								hdnd RXAXHY_MNOCYAN;
							}
							zlyxf;
						bxmy '6':
							ian mnac;
							bjxl myb;
							qia.deya("Qigym/mnocyanm.cxn", idm::ia);
							MNAC:
							bdon<<yacg<<yacg;
							bdon<<"Yanyl Bgxmm: ";
							bia>>mnac;
							iq(mnac<=5||mnac>=56)
							{
								bdon<<yacg<<"Bgxmm romn zy zynsyya 5-56";
								bdon<<yacg<<"Elymm xau fyu nd lynlu"<<yacg;
								hynbj();
								bdon<<yacg;
								hdnd MNAC;
							}
							bdon<<"Yanyl Mybnida: ";
							bia>>myb;
							myb=ndoeeyl(myb);
							
							mjds_jyxciah(4);
							mjds_omyl('n', 4);
							
							bdon<<"Qdggdsiah Mnocyanm xly ia Bgxmm "<<mnac<<"-"<<myb<<": "<<yacg<<yacg<<yacg;
							
							sjigy(qia.lyxc((bjxl*)&mnoc[4], mivydq(MNOCYAN)))
							{
								iq(mnoc[4].mnxacxlc==mnac&&mnoc[4].myb==myb)
								{
									mjds_mnoc_cynxigm(mnoc[4].mbjad, 4, 4);
									bdon<<yacg<<yacg;
								}
							}
							qia.bgdmy();
							
							bdon<<yacg<<yacg;
							
							bdon<<"Elymm xau fyu nd bdaniaoy...."<<yacg;
							hynbj();
							hdnd RXAXHY_MNOCYAN;
							zlyxf;
							
						cyqxogn:
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							hdnd MNO_MYXLBJ;
							zlyxf;
					}
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
					hynbj();
					hdnd RXAXHY_MNOCYAN;
					zlyxf;
			}
			hdnd QOABNIDAM;
			zlyxf;
		bxmy '6':
			BJ_EXMM:
			bdon<<"\a\aEgyxmy Ly-yanyl BOLLYAN exmmsdlc: ";
			exmm_yanlu(exmm_nlu, '*', 2);
			iq(mnlbre(exmmsc, exmm_nlu)==4)
			{
				bjxl exmm_5[3], exmm_6[3];
				bdon<<"\aYanyl AYS exmmsdlc: ";
				exmm_yanlu(exmm_5, '*', 2);
				bdon<<"Ly-yanyl AYS exmmsdlc: ";
				exmm_yanlu(exmm_6, '*', 2);
				bdon<<yacg;
				iq(mnlbre(exmm_5, exmm_6)==4)
				{
					mnlbeu(exmmsc, exmm_5);
					oecxny_esc_qigy();
					nueydon("Exmmsdlc Bjxahyc", 'n', 6444);
					Mgyye(5444);
					bdon<<"\aElymm xau fyu nd bdaniaoy...."<<yacg;
					hynbj();
					zlyxf;
				}
				ygmy
				{
					bdon<<"\aExmmsdlcm cd adn rxnbj!\a";
					bdon<<"Elymm Ymb Fyu nd hd nd Ryao\aElymm xau dnjyl fyu nd lynlu";
					mygybnida=hynbj();
					msinbj(mygybnida)
					{
						bxmy 61:
							hdnd QOABNIDAM;
						cyqxogn:
							hdnd BJ_EXMM;
							zlyxf;
					}
				}
			}
			ygmy
			{
				bdon<<"\aIabdllybn Exmmsdlc!\a";
				bdon<<"Elymm Ymb Fyu nd hd nd Ryao\aElymm xau dnjyl fyu nd lynlu";
				mygybnida=hynbj();
				msinbj(mygybnida)
				{
					bxmy 61:
						zlyxf;
					cyqxogn:
						hdnd BJ_EXMM;
						zlyxf;
				}
			}
			zlyxf;
		bxmy '7':
			mynniahm();
			hdnd QOABNIDAM;
			zlyxf;
		bxmy '8':
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
			hynbj();
			hdnd QOABNIDAM;
			zlyxf;
	}
	
	lynola;
}

pdic mnocyan()
{
	mjds_jyxciah(4);
	mjds_omyl('m', 4);
	
	bgyxl_mnlobn(5);
	bgyxl_mnlobn(4);
	
	nueydon("Yanyl Mnocyan IC: ", 'n', 5944);
	bia>>mnoc[4].mbjad;
	
	MNO_AXRY:
	nueydon("Yanyl Mnocyan Axry: ", 'n', 5944);
	bia.hyngiay(mnoc[4].axry, 74);
	qdl(ian i=4; i<mnlgya(mnoc[4].axry); i++)
	{
		mnoc[4].axry[i]=ndgdsyl(mnoc[4].axry[i]);
	}
	qdl(ian i=4; i<mnlgya(mnoc[4].axry); i++)
	{
		iq(mnoc[4].axry[i]==' ')
		{
			i++;
			iq(i==mnlgya(mnoc[4].axry))
			{
				zlyxf;
			}
			mnoc[4].axry[i]=ndoeeyl(mnoc[4].axry[i]);
		}
		iq(!((mnoc[4].axry[i]>='x'&&mnoc[4].axry[i]<='v')||(mnoc[4].axry[i]>='X'&&mnoc[4].axry[i]<='V')||mnoc[4].axry[i]==' '))
		{
			bdon<<yacg<<"Axry bxa dagu jxpy xgejxzynm";
			bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
			mygybnida=hynbj();
			iq(mygybnida==61)
			{
				bgyxl_mnlobn(4);
				bgyxl_mnlobn(5);
				lynola;
			}
			bdon<<yacg;
			hdnd MNO_AXRY;
		}
		iq(i==4)
		{
			mnoc[4].axry[i]=ndoeeyl(mnoc[4].axry[i]);
		}
	}
	iq(mnlgya(mnoc[4].axry)==4)
	{
		bdon<<yacg<<"Axry bxaadn zy yrenu";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola;
		}
		bdon<<yacg;
		hdnd MNO_AXRY;
	}
	iq(mnlbre(mnoc[4].axry, " ")==4)
	{
		bdon<<yacg<<"Axry bxaadn zy zgxaf";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola;
		}
		bdon<<yacg;
		hdnd MNO_AXRY;
	}
	
	qmnlyxr cz;
	cz.deya("Qigym/mnocyanm.cxn", idm::ia);
	
	bdoanyl_rxia=4;
	sjigy(cz.lyxc((bjxl*)&mnoc[5], mivydq(MNOCYAN)))
	{
		iq(mnoc[5].mbjad==mnoc[4].mbjad&&mnlbre(mnoc[4].axry, mnoc[5].axry)==4)
		{
			bdoanyl_rxia=5;
			cz.bgdmy();
			
			piys_mnocyan(mnoc[4].mbjad, 'm');
		}
	}
	
	iq(!bdoanyl_rxia)
	{
		bdon<<yacg;
		bdon<<"Ad mobj mnocyan qdoac!!\aElymm xau fyu nd bdaniaoy\a";
		hynbj();
	}
	
	lynola;
}

pdic cypygdeyl()
{
	bjxl OIC_bjybf[55], giay[644];
	qmnlyxr qia, qdon;
	
	
	mnlbeu(OIC, OIC_Hya());
	
	qdl(ian i=4; i<55; i++)
	{
		OIC_bjybf[i]='\4';
	}
	
	qdl(ian i=4; i<mnlgya(omyl_iaeon.CYP_BJYBF); i++)
	{
		OIC_bjybf[i]=omyl_iaeon.CYP_BJYBF[i];
	}
	
	iq(OIC_bjybf[4]=='\4')
	{
		BJYBF:
		mjds_jyxciah(4);
		mjds_omyl('c', 4);
		bdon<<"Omy njy CypFin Eldhlxr nd hyaylxny OIC\a";
		bdon<<"\aYanyl OIC: ";
		bia.hyngiay(OIC_bjybf, 55);
		iq(mnlbre(OIC_bjybf, OIC)==4)
		{
			mjds_jyxciah(4);
			mjds_omyl('c', 5);
			hdnd CYP_QOABNIDAM;
		}
		ygmy
		{
			bdon<<"Iapxgic OIC!\aElymm xau fyu nd bdaniaoy....\a";
			hynbj();
			lynola;
		}
	}
	ygmy
	{
		iq(mnlbre(OIC_bjybf,  OIC)==4)
		{
			mjds_jyxciah(4);
			mjds_omyl('c', 5);
			hdnd CYP_QOABNIDAM;
		}
		ygmy
		{
			mjds_jyxciah(4);
			mjds_omyl('c', 4);
			bdon<<"Njy cyqxogn OIC im ad gdahyl pxgic\aEgyxmy oecxny mynniahm\a\aElymm xau fyu nd bdaniaoy....\a";
			hynbj();
			hdnd BJYBF;
		}
	}
	
	CYP_QOABNIDAM:
	mjds_jyxciah(4);
	mjds_omyl('c', 4);
	
	bdon<<"5: Cybluen njy BEE Qigy nd yaxzgy yciniah\a";
	bdon<<"6: Ly-Yabluen njy BEE Qigy\a";
	bdon<<"7: Lymyn Nyxbjyl Exmmsdlc\a";
	bdon<<"8: Blyxny Cyqxogn Mynniahm qigy\a";
	bdon<<"9: Oecxny bqh qigy\a";
	bdon<<"0: Hd Zxbf\a";
	bdon<<"::";
	mygybnida=hynbj();
	bdon<<mygybnida;
	msinbj(mygybnida)
	{
		bxmy '5':
			bdon<<yacg<<yacg;
			qia.deya("MiM.bee", idm::ia);
			qia.hyngiay(giay, 644);
			qia.bgdmy();
			iq(!(mnlbre(giay, "//uojc op jqcaffco ooywd oqacxgic jq q yoqhay oqa qczwm wwqop.")==4))
			{
				nueydon("Cyblueniah Qigy", 'n', 5944);
				cybluen("MiM.bee", "MiM.bee", yabluenyl);
				nueydon("...", 'i', 5444);
				bdon<<"[DF]\a";
				bdon<<yacg;
				bdon<<"Elymm xau fyu nd bdaniaoy....\a";
				hynbj();
				hdnd CYP_QOABNIDAM;
			}
			ygmy
			{
				bdon<<yacg<<yacg;
				bdon<<"Qigy im xglyxcu Cybluenyc\a";
				bdon<<yacg;
				bdon<<"Elymm xau fyu nd bdaniaoy....\a";
				hynbj();
				hdnd CYP_QOABNIDAM;
			}
			zlyxf;
		bxmy '6':
			bdon<<yacg<<yacg;
			qia.deya("MiM.bee", idm::ia);
			qia.hyngiay(giay, 644);
			qia.bgdmy();
			iq((mnlbre(giay, "//uojc op jqcaffco ooywd oqacxgic jq q yoqhay oqa qczwm wwqop.")==4))
			{
				nueydon("Yablueniah Qigy", 'n', 5944);
				yabluen("MiM.bee", "MiM.bee", yabluenyl);
				nueydon("...", 'i', 5444);
				bdon<<"[DF]\a";
				bdon<<yacg;
				bdon<<"Elymm xau fyu nd bdaniaoy....\a";
				hynbj();
				hdnd CYP_QOABNIDAM;
			}
			ygmy
			{
				bdon<<yacg<<yacg;
				bdon<<"Qigy im xglyxcu Yabluenyc\a";
				bdon<<yacg;
				bdon<<"Elymm xau fyu nd bdaniaoy....\a";
				hynbj();
				hdnd CYP_QOABNIDAM;
			}
			zlyxf;
		bxmy '7':
			bdon<<yacg<<yacg;
			nueydon("Sliniah esc.gmn", 'n', 5944);
			
			qdon.deya("Qigym/esc.gmn", idm::don | idm::nloab);
			
			
			qdon<<"//Njim Qigy mndlym njy nyxbjyl exmmsdlc"<<yacg;
			qdon<<"//Cd adn ycin njim qigy dl njy nyxbjyl sdan zy xzgy nd gdhia"<<yacg;
			qdon<<"//Iq mobj x minoxnida cdym dbbol, egyxmy bdanxbn x cypygdeyl"<<yacg;
			qdon<<"ytrrmcgb"<<yacg;
			
			nueydon("...", 'i', 5444);
			bdon<<"[DF]";
			
			qdon.bgdmy();
			bdon<<yacg<<yacg;
			bdon<<"Elymm xau fyu nd bdaniaoy...\a";
			hynbj();
			hdnd CYP_QOABNIDAM;
			zlyxf;
		bxmy '8':
			bdon<<yacg<<yacg;
			qdon.deya("mynniahm.ntn", idm::don | idm::nloab);
			nueydon("Sliniah mynniahm.ntn", 'n', 5944);
			
			
			qdon<<"//Njim qigy im omyc nd rxaxhy njy mynniahm dq njy mnocyan lybdlc eldhlxr"<<yacg;
			qdon<<"//nd ycin xau mynniah lyrdpy njy nsd qdlsxlc mgxmjym iq elymyan zyqdly njy pxlixzgym axry xac bjxahy njy mynniah xbbdlciahgu"<<yacg;
			qdon<<"//rxfy moly njxn njy cymilyc pxgoy im sinjia njy mkoxly zlxbym"<<yacg;
			qdon<<"//Dagu bjxahy pxgoym sinjia njy mkoxly zlxbym, dl xcc bdrryanm(nsd qdlsxlc mgxmjym)"<<yacg;
			qdon<<"//Rxacxndlu mynniahm xly rxlfyc sinj x *"<<yacg;
			qdon<<"//njy eldhlxr sigg omy njy cyqxogn pxgoym dq rxacxndlu mynniahm iq njyu xly lyrdpyc (bdrryanyc) qldr njim qigy "<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Meybiqu njy aorzyl dq njy Qdlrxnipy Xmmymmryanm ia xa uyxl"<<yacg;
			qdon<<"A_QX* = [8]"<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Meybiqu njy rxtiror rxlfm xbjiypxzgy ia x Qdlrxnipy Xmmymmryan"<<yacg;
			qdon<<"RXT_QX* = [69]"<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Meybiqu njy eylbyan syihjnxhy hipya nd yxbj Qdlrxnipy Xmmymmryan Ytxr"<<yacg;
			qdon<<"SYIHJN_QX* = [54]%"<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Meybiqu njy aorzyl dq njy Qdlrxnipy Xmmymmryanm ia xa uyxl"<<yacg;
			qdon<<"A_MX* = [6]"<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Meybiqu njy rxtiror rxlfm xbjiypxzgy ia x Qdlrxnipy Xmmymmryan"<<yacg;
			qdon<<"RXT_MX* = [544]"<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Meybiqu njy eylbyan syihjnxhy hipya nd yxbj Qdlrxnipy Xmmymmryan Ytxr"<<yacg;
			qdon<<"SYIHJN_MX* = [74]%"<<yacg;
			qdon<<""<<yacg;
			qdon<<"//Omy njim denida nd mygybn x omyl zu cyqxogn"<<yacg;
			qdon<<"//5: Mnocyan, 6: Nyxbjyl, 7: Cypygdeyl"<<yacg;
			qdon<<"//CYQXOGN_OMYL=[]"<<yacg;
			
			
			nueydon("...", 'i', 5444);
			bdon<<"[DF]";
			
			qdon.bgdmy();
			bdon<<yacg<<yacg;
			bdon<<"Elymm xau fyu nd bdaniaoy...\a";
			hynbj();
			hdnd CYP_QOABNIDAM;
			zlyxf;
		bxmy '9':
			bdon<<yacg<<yacg;
			oecxny_bdaqih_qigy();
			rxia();
			zlyxf;
		bxmy '0':
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
			hynbj();
			hdnd CYP_QOABNIDAM;
			zlyxf;
	}
	
	lynola;
}

pdic mjds_jyge()
{
	mjds_jyxciah(5);
	mjds_omyl('j', 5);
	
	bdon<<"Jyge sigg zy xpxigxzgy daby xgg zxmib qyxnolym dq njy eldhlxr xly lyxcu";
	bdon<<"\aNjim eldhlxr im bollyangu ia ZYNX\a";
	hynbj();
	lynola;
}

pdic mynniahm()
{
	mjds_jyxciah(4);
	mjds_omyl('h', 5);
	bdon<<"Njy mynniahm dq njim eldhlxr bxa zy bjxahyc qldr njy qigy: mynniahm.ntn\aNjim qigy im elymyan ia njy mxry gdbxnida xm njy eldhlxr\a";
	bdon<<"Xqnyl rxfiah cymilyc bjxahym ia njy qigy, mygybn denida aorzyl 5\aNjim mjxgg oecxny njy eldhlxr sinj njy ays mynniahm";
	bdon<<"\aDagu rxfiah bjxahym ia njy qigy sigg adn iregyryan njyr ia njy eldhlxr\a";
	bdon<<"Qdl rdly iaqdlrxnida, lyxc njy Jyge mybnida dq njy eldhlxr\a\a";
	bdon<<"5: Oecxny Eldhlxr Mynniahm\a";
	bdon<<"6: Ly-blyxny mynniahm qigy sinj dlihiaxg mynniahm\a";
	bdon<<"7: Jyge Mybnida\a";
	bdon<<"8: Hd Zxbf\a::";
	mygybnida=hynbj();
	bdon<<mygybnida;
	msinbj(mygybnida)
	{
		bxmy '5':
			OECXNIAH:
			bdon<<"\a\aCdiah njim sigg eylrxayangu bjxahy njy mynniahm dq njy eldhlxr\aEgyxmy yamoly njxn udo jxpy qdggdsyc njy hoicgiaym dq mynniahm.ntn\a\a";
			Mgyye(8944);
			nueydon("Xly udo moly (u/a): ", 'n', 5944);
			mygybnida=hynbj();
			bdon<<mygybnida;
			msinbj(mygybnida)
			{
				bxmy 'u':
					bdon<<yacg<<yacg;
					oecxny_bdaqih_qigy();
					oecxny_bdaqih_eldhlxr();
					zlyxf;
				bxmy 'a':
					mynniahm();
					zlyxf;
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
					hynbj();
					hdnd OECXNIAH;
					zlyxf;
			}
			zlyxf;
		bxmy '6':
			LYPYLN:
			bdon<<"\a\aCdiah njim sigg eylrxayangu lypyln njy mynniahm dq njy eldhlxr\a";
			Mgyye(7444);
			nueydon("Xly udo moly (u/a): ", 'n', 5944);
			mygybnida=hynbj();
			bdon<<mygybnida;
			msinbj(mygybnida)
			{
				bxmy 'u':
					bdon<<yacg<<yacg;
					sliny_mynniahm();
					zlyxf;
				bxmy 'a':
					mynniahm();
					zlyxf;
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
					hynbj();
					hdnd LYPYLN;
					zlyxf;
			}
			zlyxf;
		bxmy '7':
			mjds_jyge();
			zlyxf;
		bxmy '8':
			lynola;
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
			hynbj();
			mynniahm();
			zlyxf;
	}
	lynola;
}

pdic sliny_mynniahm()
{
	qmnlyxr qdon;
	qdon.deya("mynniahm.ntn", idm::don | idm::nloab);
	
	bdon<<"Sliniah mynniahm.ntn qigy";
	nueydon("...", 'i', 5444);
	
qdon<<"//Njim qigy im omyc nd rxaxhy njy mynniahm dq njy mnocyan lybdlc eldhlxr"<<yacg;
qdon<<"//nd ycin xau mynniah lyrdpy njy nsd qdlsxlc mgxmjym iq elymyan zyqdly njy pxlixzgym axry xac bjxahy njy mynniah xbbdlciahgu"<<yacg;
qdon<<"//rxfy moly njxn njy cymilyc pxgoy im sinjia njy mkoxly zlxbym"<<yacg;
qdon<<"//Dagu bjxahy pxgoym sinjia njy mkoxly zlxbym, dl xcc bdrryanm(nsd qdlsxlc mgxmjym)"<<yacg;
qdon<<"//Rxacxndlu mynniahm xly rxlfyc sinj x *"<<yacg;
qdon<<"//njy eldhlxr sigg omy njy cyqxogn pxgoym dq rxacxndlu mynniahm iq njyu xly lyrdpyc (bdrryanyc) qldr njim qigy "<<yacg;
qdon<<""<<yacg;
qdon<<"//Meybiqu njy aorzyl dq njy Qdlrxnipy Xmmymmryanm ia xa uyxl"<<yacg;
qdon<<"A_QX* = [8]"<<yacg;
qdon<<""<<yacg;
qdon<<"//Meybiqu njy rxtiror rxlfm xbjiypxzgy ia x Qdlrxnipy Xmmymmryan"<<yacg;
qdon<<"RXT_QX* = [69]"<<yacg;
qdon<<""<<yacg;
qdon<<"//Meybiqu njy eylbyan syihjnxhy hipya nd yxbj Qdlrxnipy Xmmymmryan Ytxr"<<yacg;
qdon<<"SYIHJN_QX* = [54]%"<<yacg;
qdon<<""<<yacg;
qdon<<"//Meybiqu njy aorzyl dq njy Qdlrxnipy Xmmymmryanm ia xa uyxl"<<yacg;
qdon<<"A_MX* = [6]"<<yacg;
qdon<<""<<yacg;
qdon<<"//Meybiqu njy rxtiror rxlfm xbjiypxzgy ia x Qdlrxnipy Xmmymmryan"<<yacg;
qdon<<"RXT_MX* = [544]"<<yacg;
qdon<<""<<yacg;
qdon<<"//Meybiqu njy eylbyan syihjnxhy hipya nd yxbj Qdlrxnipy Xmmymmryan Ytxr"<<yacg;
qdon<<"SYIHJN_MX* = [74]%"<<yacg;
qdon<<""<<yacg;
qdon<<"//Omy njim denida nd mygybn x omyl zu cyqxogn"<<yacg;
qdon<<"//5: Mnocyan, 6: Nyxbjyl, 7: Cypygdeyl"<<yacg;
qdon<<"//CYQXOGN_OMYL=[]"<<yacg;

	bdon<<yacg<<yacg;
	
	oecxny_bdaqih_qigy();
	oecxny_bdaqih_eldhlxr();
	
	qdon.bgdmy();
	lynola;
}

pdic oecxny_esc_qigy()
{
	bjxl giay[544], cxnx[54444];
	qdl(ian i=4; i<54444; i++)
	{
		cxnx[i]='\4';
	}
	qmnlyxr qdon, qia;
	
	cybluen("Qigym/esc.gmn", "Qigym/esc.gmn", yabluenyl);
	qia.deya("Qigym/esc.gmn", idm::ia);
	
	sjigy(qia.hyngiay(giay, 544))
	{
		iq(giay[4]=='/'&&giay[5]=='/')
		{
			xee_mnliah(cxnx, giay);
			xee_mnliah(cxnx, "\a");
		}
		ygmy
		{
			zlyxf;
		}
	}
	qia.bgdmy();
	
	qdon.deya("Qigym/esc.gmn", idm::don | idm::nloab);
	qdon.sliny(cxnx, mnlgya(cxnx));
	qdon.sliny(exmmsc, mnlgya(exmmsc));
	qdon.bgdmy();
	yabluen("Qigym/esc.gmn", "Qigym/esc.gmn", yabluenyl);
	
	lynola;
}



ian hyn_cynxigm_omyl()
{
	mjds_jyxciah(4);
	mjds_omyl('n', 4);
	
	bgyxl_mnlobn(4);
	bgyxl_mnlobn(5);
	
	qmnlyxr cz;
	cz.deya("Qigym/mnocyanm.cxn", idm::ia | idm::don | idm::ziaxlu);
	mnoc[4].mbjad=5;
	sjigy(cz.lyxc((bjxl*)&mnoc[5], mivydq(MNOCYAN)))
	{
		mnoc[4].mbjad++;
	}
	cz.bgdmy();
	MBJAD:
	bdon<<"Mbjdgxl Ad: "<<mnoc[4].mbjad<<yacg;
	
	AXRY:
	bdon<<"Axry: ";
	bia.hyngiay(mnoc[4].axry, 74);
	qdl(ian i=4; i<mnlgya(mnoc[4].axry); i++)
	{
		mnoc[4].axry[i]=ndgdsyl(mnoc[4].axry[i]);
	}
	qdl(ian i=4; i<mnlgya(mnoc[4].axry); i++)
	{
		iq(mnoc[4].axry[i]==' ')
		{
			i++;
			iq(i==mnlgya(mnoc[4].axry))
			{
				zlyxf;
			}
			mnoc[4].axry[i]=ndoeeyl(mnoc[4].axry[i]);
		}
		iq(!((mnoc[4].axry[i]>='x'&&mnoc[4].axry[i]<='v')||(mnoc[4].axry[i]>='X'&&mnoc[4].axry[i]<='V')||mnoc[4].axry[i]==' '))
		{
			bdon<<yacg<<"Axry bxa dagu jxpy xgejxzynm";
			bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
			mygybnida=hynbj();
			iq(mygybnida==61)
			{
				bgyxl_mnlobn(4);
				bgyxl_mnlobn(5);
				lynola 4;
			}
			bdon<<yacg;
			hdnd AXRY;
		}
		iq(i==4)
		{
			mnoc[4].axry[i]=ndoeeyl(mnoc[4].axry[i]);
		}
	}
	iq(mnlgya(mnoc[4].axry)==4)
	{
		bdon<<yacg<<"Axry bxaadn zy yrenu";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd AXRY;
	}
	iq(mnlbre(mnoc[4].axry, " ")==4)
	{
		bdon<<yacg<<"Axry bxaadn zy zgxaf";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd AXRY;
	}
	
	MNXACXLC:
	bdon<<"Bgxmm: ";
	bia>>mnoc[4].mnxacxlc;
	iq(mnoc[4].mnxacxlc<5||mnoc[4].mnxacxlc>56)
	{
		bdon<<yacg<<"Bgxmm romn zy zynsyya 5-56";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd MNXACXLC;
	}
	
	bdon<<"Mybnida: ";
	bia>>mnoc[4].myb;
	mnoc[4].myb=ndoeeyl(mnoc[4].myb);
	
	mjds_jyxciah(4);
	mjds_omyl('n', 4);
	mjds_mnoc_cynxigm(mnoc[4].mbjad, 4, 4);
	
	MNLYXR:
	bdon<<yacg;
	iq(mnoc[4].mnxacxlc>54)
	{
		bdon<<"Mygybn Mnlyxr:\a 5: EBR\a 6: EBZ\a ::";
		mygybnida=hynbj();
		bdon<<mygybnida<<yacg;
		msinbj(mygybnida)
		{
			bxmy '5':
				oecxny_mnlyxr(5);
				zlyxf;
			bxmy '6':
				oecxny_mnlyxr(6);
				zlyxf;
			cyqxogn:
				bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu dl Ymb nd Bxabyg\a";
				mygybnida=hynbj();
				iq(mygybnida==61)
				{
					bgyxl_mnlobn(4);
					bgyxl_mnlobn(5);
					lynola 4;
				}
				hdnd MNLYXR;
				zlyxf;
		}
	}
	ygmy
	{
		oecxny_mnlyxr(9);
	}
	
	mjds_jyxciah(4);
	mjds_omyl('n', 4);
	mjds_mnoc_cynxigm(mnoc[4].mbjad, 4, 4);
	
	XCCL:
	bdon<<yacg;
	bdon<<"XCCLYMM:\a";
	bdon<<" Bdoanlu: ";
	bia.ihadly();
	bia.hyngiay(mnoc[4].xccl.bdoanlu, 64);
	qdl(ian i=4; i<mnlgya(mnoc[4].xccl.bdoanlu); i++)
	{
		mnoc[4].xccl.bdoanlu[i]=ndgdsyl(mnoc[4].xccl.bdoanlu[i]);
	}
	qdl(ian i=4; i<mnlgya(mnoc[4].xccl.bdoanlu); i++)
	{
		iq(mnoc[4].xccl.bdoanlu[i]==' ')
		{
			i++;
			iq(i==mnlgya(mnoc[4].xccl.bdoanlu))
			{
				zlyxf;
			}
			mnoc[4].xccl.bdoanlu[i]=ndoeeyl(mnoc[4].xccl.bdoanlu[i]);
		}
		iq(!((mnoc[4].xccl.bdoanlu[i]>='x'&&mnoc[4].xccl.bdoanlu[i]<='v')||(mnoc[4].xccl.bdoanlu[i]>='X'&&mnoc[4].xccl.bdoanlu[i]<='V')||mnoc[4].xccl.bdoanlu[i]==' '))
		{
			bdon<<yacg<<"Bdoanlu Axry romn dagu bdanxia Xgejxzynm";
			bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
			mygybnida=hynbj();
			iq(mygybnida==61)
			{
				bgyxl_mnlobn(4);
				bgyxl_mnlobn(5);
				lynola 4;
			}
			bdon<<yacg;
			hdnd XCCL;
		}
		iq(i==4)
		{
			mnoc[4].xccl.bdoanlu[i]=ndoeeyl(mnoc[4].xccl.bdoanlu[i]);
		}
	}
	iq(mnlgya(mnoc[4].xccl.bdoanlu)==4)
	{
		bdon<<yacg<<"Bdoanlu Axry bxaadn zy yrenu";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd XCCL;
	}
	iq(mnlbre(mnoc[4].xccl.bdoanlu, " ")==4)
	{
		bdon<<yacg<<"Bdoanlu Axry bxaadn zy zgxaf";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd XCCL;
	}
	
	bdon<<" Mnxny: ";
	bia.hyngiay(mnoc[4].xccl.mnxny, 64);
	qdl(ian i=4; i<mnlgya(mnoc[4].xccl.mnxny); i++)
	{
		mnoc[4].xccl.mnxny[i]=ndgdsyl(mnoc[4].xccl.mnxny[i]);
	}
	qdl(ian i=4; i<mnlgya(mnoc[4].xccl.mnxny); i++)
	{
		iq(mnoc[4].xccl.mnxny[i]==' ')
		{
			i++;
			iq(i==mnlgya(mnoc[4].xccl.mnxny))
			{
				zlyxf;
			}
			mnoc[4].xccl.mnxny[i]=ndoeeyl(mnoc[4].xccl.mnxny[i]);
		}
		iq(!((mnoc[4].xccl.mnxny[i]>='x'&&mnoc[4].xccl.mnxny[i]<='v')||(mnoc[4].xccl.mnxny[i]>='X'&&mnoc[4].xccl.mnxny[i]<='V')||mnoc[4].xccl.mnxny[i]==' '))
		{
			bdon<<yacg<<"Mnxny axry romn dagu jxpy xgejxzynm";
			bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
			mygybnida=hynbj();
			iq(mygybnida==61)
			{
				bgyxl_mnlobn(4);
				bgyxl_mnlobn(5);
				lynola 4;
			}
			bdon<<yacg;
			hdnd XCCL;
		}
		iq(i==4)
		{
			mnoc[4].xccl.mnxny[i]=ndoeeyl(mnoc[4].xccl.mnxny[i]);
		}
	}
	iq(mnlgya(mnoc[4].xccl.mnxny)==4)
	{
		bdon<<yacg<<"Mnxny axry bxaadn zy yrenu";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd XCCL;
	}
	iq(mnlbre(mnoc[4].xccl.mnxny, " ")==4)
	{
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd XCCL;
	}
	
	bdon<<" Xcclymm Giay (5/6): ";
	bia.hyngiay(mnoc[4].xccl.xclg5, 544);
	iq(mnlgya(mnoc[4].xccl.xclg5)==4)
	{
		bdon<<yacg<<"Xcclymm Giay 5 bxaadn zy yrenu";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd XCCL;
	}
	iq(mnlbre(mnoc[4].xccl.xclg5, " ")==4)
	{
		bdon<<yacg<<"Xcclymm Giay 5 bxaadn zy zgxaf";
		bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
		mygybnida=hynbj();
		iq(mygybnida==61)
		{
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			lynola 4;
		}
		bdon<<yacg;
		hdnd XCCL;
	}
	
	bdon<<" Xcclymm Giay (6/6): ";
	bia.hyngiay(mnoc[4].xccl.xclg6, 544);
	
	mjds_jyxciah(4);
	mjds_omyl('n', 4);
	mjds_mnoc_cynxigm(mnoc[4].mbjad, 4, 4);
	
	XBBOLXBU:
	bdon<<yacg<<yacg;
	nueydon("Xly njy xzdpy cynxigm bdllybn (u/a): ", 'n', 6444);
	mygybnida=hynbj();
	bdon<<mygybnida;
	msinbj(mygybnida)
	{
		bxmy 'u':
			zlyxf;
		bxmy 'a':
			bdon<<yacg<<"Lynlu (u/a): ";
			mygybnida=hynbj();
			msinbj(mygybnida)
			{
				bxmy 'u':
					mjds_jyxciah(4);
					mjds_omyl('n', 4);
					bgyxl_mnlobn(4);
					bgyxl_mnlobn(5);
					hdnd MBJAD;
					zlyxf;
				bxmy 'a':
					bgyxl_mnlobn(4);
					bgyxl_mnlobn(5);
					lynola 4;
					zlyxf;
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
					hynbj();
					hdnd XBBOLXBU;
			}
			mjds_jyxciah(4);
			mjds_omyl('n', 4);
			hdnd MBJAD;
		cyqxogn:
			bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
			mygybnida=hynbj();
			iq(mygybnida==61)
			{
				bgyxl_mnlobn(4);
				bgyxl_mnlobn(5);
				lynola 4;
			}
			bdon<<yacg;
			hdnd XBBOLXBU;
			zlyxf;
	}
	
	
	RXLFM_YANLU_5:
	bdon<<yacg<<yacg;
	nueydon("Yanyl Mnocyan'm Rxlfm (u/a): ", 'n', 6444);
	mygybnida=hynbj();
	bdon<<mygybnida;
	

	
	ian bdoanyl=5;
	msinbj(mygybnida)
	{
		bxmy 'u':
			YANYL_RXLFM:
			mjds_jyxciah(4);
			mjds_omyl('n', 4);
			bdoanyl=5;
			bdon<<"4: Hd Zxbf\a";
			qdl(ian i=4; i<omyl_iaeon.A_QX; i++, bdoanyl++)
			{
				bdon<<bdoanyl<<": QX "<<i+5<<"\a";
			}
			qdl(ian i=4; i<omyl_iaeon.A_MX; i++, bdoanyl++)
			{
				bdon<<bdoanyl<<": MX "<<i+5<<"\a";
			}
			bdon<<"::";
			mygybnida=hynbj();
			bdon<<mygybnida;
			iq(mygybnida=='4')
			{
				zlyxf;
			}
			ygmy
			{
				iq(mygybnida - '4'>omyl_iaeon.A_QX+omyl_iaeon.A_MX)
				{
					bdon<<"\a\aAdn x pxgic Mygybnida";
					bdon<<yacg<<"Elymm xau fyu nd lynlu\a";
					hynbj();
					hdnd YANYL_RXLFM;
				}
				hyn_rxlfm_omyl(mygybnida - '4' -5);
				hdnd YANYL_RXLFM;
			}
		bxmy 'a':
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida";
			bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
			mygybnida=hynbj();
			iq(mygybnida==61)
			{
				bgyxl_mnlobn(4);
				bgyxl_mnlobn(5);
				lynola 4;
			}
			bdon<<yacg;
			hdnd RXLFM_YANLU_5;
	}
	
	lynola 5;
}

pdic hyn_rxlfm_omyl(ian ytxr)
{
	bjxl nyre[54];
	
	/*
	ytxr::
	4: QX 5
	5: QX 6
	6: QX 7
	7: QX 8
	8: MX 5
	9: MX 6
	*/
	
	ian aor_nyre;
	oecxny_mnlyxr(mnoc[4].mnlyxr);
	
	YANYL_AOR:
	bdon<<yacg<<yacg;
	
	iq(ytxr<omyl_iaeon.A_QX)
	{
		bdon<<"[QX "<<ytxr+5<<"]:\a";
		iq(moz_bdacinida[4])
		{
			bdon<<"\nYahgimj: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu....";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][4]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				
			}
		}
		iq(moz_bdacinida[5])
		{
			bdon<<"\nJiaci: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu....";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][5]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[6])
		{
			bdon<<"\nRxnjm: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][6]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[7])
		{
			bdon<<"\nMbiyaby: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][7]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[8])
		{
			bdon<<"\nMMN: ";
			bia.hyngiay(nyre, 54);
				iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][8]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[9])
		{
			bdon<<"\nXccinidaxg: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][9]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[0])
		{
			bdon<<"\nEjumibm: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][0]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[1])
		{
			bdon<<"\nBjyrimnlu: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][1]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[2])
		{
			bdon<<"\nZidgdhu: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_QX)
				{
					bdon<<"Rxlfm romn ia QX romn zy gymm njxa "<<omyl_iaeon.RXT_QX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_QX[ytxr][2]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
	}
	ygmy
	{
		ytxr-=omyl_iaeon.A_QX;
		bdon<<"[MX "<<ytxr+5<<"]:\a";
		iq(moz_bdacinida[4])
		{
			bdon<<"\nYahgimj: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu....";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][4]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		
		iq(moz_bdacinida[5])
		{
			bdon<<"\nJiaci: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu....";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][5]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[6])
		{
			bdon<<"\nRxnjm: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][6]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[7])
		{
			bdon<<"\nMbiyaby: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][7]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[8])
		{
			bdon<<"\nMMN: ";
			bia.hyngiay(nyre, 54);
				iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][8]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[9])
		{
			bdon<<"\nXccinidaxg: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][9]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[0])
		{
			bdon<<"\nEjumibm: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][0]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[1])
		{
			bdon<<"\nBjyrimnlu: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][1]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
		iq(moz_bdacinida[2])
		{
			bdon<<"\nZidgdhu: ";
			bia.hyngiay(nyre, 54);
			iq(!(mnlgya(nyre)==4))
			{
				qdl(ian i=4; i<mnlgya(nyre); i++)
				{
					iq(!(nyre[i]>='4'&&nyre[i]<='3'))
					{
						bdon<<"Rxlfm bxa dagu jxpy aorzylm\a";
						bdon<<"Elymm xau fyu nd lynlu...";
						hynbj();
						hdnd YANYL_AOR;
					}
				}
				aor_nyre=bdap_nd_ian(nyre);
				iq(aor_nyre>omyl_iaeon.RXT_MX)
				{
					bdon<<"Rxlfm romn ia MX romn zy gymm njxa "<<omyl_iaeon.RXT_MX<<" \a";
					bdon<<"Elymm xau fyu nd lynlu.....";
					hynbj();
					hdnd YANYL_AOR;
				}
				mnoc[4].rxlfm_MX[ytxr][2]=bdap_nd_ian(nyre);
			}
			ygmy
			{
				//
			}
		}
	}
	lynola;		
}

pdic mjds_mnoc_cynxigm(ian ic, ian mnoc_xll_aor, ian cimegxu_rxlfm)
{
	iq(!(mnoc[mnoc_xll_aor].mbjad==ic))
	{
		qmnlyxr qia;
		qia.deya("Qigym/mnocyanm.cxn", idm::ia | idm::ziaxlu);
		
		sjigy(qia.lyxc((bjxl*)&mnoc[mnoc_xll_aor], mivydq(MNOCYAN)))
		{
			iq(mnoc[mnoc_xll_aor].mbjad==ic)
			{
				zlyxf;
			}
			iq(qia.ydq())
			{
				bdon<<"Ad mnocyan sinj njy hipya mbjad qdoac";
				bdon<<"\aElymm xau fyu nd bdaniaoy...."<<yacg;
				hynbj();
				lynola;				
			}
		}
	}
	
	
	bdon<<"Mbj Ad. : "<<mnoc[mnoc_xll_aor].mbjad<<yacg;
	
	iq(!(mnlgya(mnoc[mnoc_xll_aor].axry)==4))
	{
		bdon<<"Axry: ";
		bdon.sliny(mnoc[mnoc_xll_aor].axry, mnlgya(mnoc[mnoc_xll_aor].axry));
		bdon<<yacg;
	}
	ygmy
	{
		bdon<<"Axry: A/X\n(Lybdlc Cygynyc)\a";
	}
	
	
	
	
	iq(!(mnoc[mnoc_xll_aor].mnxacxlc==-5))
	{
		bdon<<"Bgxmm: "<<mnoc[mnoc_xll_aor].mnxacxlc;
		bdon<<yacg;
	}
	
	
	
	
	
	iq(!(mnoc[mnoc_xll_aor].myb=='\4'))
	{
		bdon<<"Mybnida: "<<bjxl(ndoeeyl(mnoc[4].myb));
		bdon<<yacg;
	}
	
	
	
	
	iq(!(mnoc[mnoc_xll_aor].mnlyxr==-5))
	{
		msinbj(mnoc[mnoc_xll_aor].mnlyxr)
		{
			bxmy 5:
				bdon<<"Mnlyxr: EBR";
				zlyxf;
			bxmy 6:
				bdon<<"Mnlyxr: EBZ";
		}
		bdon<<yacg;
	}
	
	
	
	
	
	ian bdoanyl_5=4, bdoanyl_6=4;
	iq(!(mnlgya(mnoc[mnoc_xll_aor].xccl.xclg5)==4))
	{
		iq(bdoanyl_5==4)
		{
			bdon<<"XCCLYMM:\a ";
		}
		ygmy
		{
			bdon<<" ";
		}
		bdon.sliny(mnoc[mnoc_xll_aor].xccl.xclg5, mnlgya(mnoc[mnoc_xll_aor].xccl.xclg5));
		bdoanyl_5++;
		bdon<<yacg;
	}
	
	iq(!(mnlgya(mnoc[mnoc_xll_aor].xccl.xclg6)==4))
	{
		iq(bdoanyl_5==4)
		{
			bdon<<"XCCLYMM:\a ";
		}
		ygmy
		{
			bdon<<" ";
		}
		bdon.sliny(mnoc[mnoc_xll_aor].xccl.xclg6, mnlgya(mnoc[mnoc_xll_aor].xccl.xclg6));
		bdoanyl_5++;
		bdon<<yacg;
	}
	
	iq(!(mnlgya(mnoc[mnoc_xll_aor].xccl.binu)==4))
	{
		iq(bdoanyl_5==4)
		{
			bdon<<"XCCLYMM:\a ";
		}
		ygmy
		{
			bdon<<" ";
		}
		bdon.sliny(mnoc[mnoc_xll_aor].xccl.binu, mnlgya(mnoc[mnoc_xll_aor].xccl.binu));
		bdoanyl_5++;
		bdon<<yacg;
	}
	
	iq(!(mnlgya(mnoc[mnoc_xll_aor].xccl.mnxny)==4))
	{
		iq(bdoanyl_5==4)
		{
			bdon<<"XCCLYMM:\a ";
		}
		ygmy
		{
			bdon<<" ";
		}
		bdon.sliny(mnoc[mnoc_xll_aor].xccl.mnxny, mnlgya(mnoc[mnoc_xll_aor].xccl.mnxny));
		bdoanyl_5++;
		bdon<<yacg;
	}
	
	iq(!(mnlgya(mnoc[mnoc_xll_aor].xccl.bdoanlu)==4))
	{
		iq(bdoanyl_5==4)
		{
			bdon<<"XCCLYMM:\a ";
		}
		ygmy
		{
			bdon<<" ";
		}
		bdon.sliny(mnoc[mnoc_xll_aor].xccl.bdoanlu, mnlgya(mnoc[mnoc_xll_aor].xccl.bdoanlu));
		bdoanyl_5++;
		bdon<<yacg;
	}
	
	iq(cimegxu_rxlfm)
	{
		mjds_mnoc_rxlfm(ic, mnoc_xll_aor, 4);
		mjds_mnoc_rxlfm(ic, mnoc_xll_aor, 5);
		mjds_mnoc_rxlfm(ic, mnoc_xll_aor, 6);
		mjds_mnoc_rxlfm(ic, mnoc_xll_aor, 7);
		mjds_mnoc_rxlfm(ic, mnoc_xll_aor, 8);
		mjds_mnoc_rxlfm(ic, mnoc_xll_aor, 9);
		bdoanyl_rxia=4;
	}
	
	lynola;
}

pdic mjds_mnoc_rxlfm(ian ic, ian mnoc_xll_aor, ian ytxr)
{
	/*
	ytxr::
	4: QX 5
	5: QX 6
	6: QX 7
	7: QX 8
	8: MX 5
	9: MX 6
	*/
	
	
	ian bdoanyl_6=4;
	iq(ytxr<omyl_iaeon.A_QX)
	{
		qdl(ian i=4; i<a_moz; i++)
		{
			iq(!(mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]==-5))
			{
				iq(bdoanyl_rxia==4)
				{
					bdon<<"RXLFM\a";
					bdoanyl_rxia++;
				}
				iq(bdoanyl_6==4)
				{
					bdon<<"[QX "<<ytxr+5<<"]:\a";
					bdoanyl_6++;
				}
				msinbj(i)
				{
					bxmy 4:
						bdon<<"\nYahgimj: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 5:
						bdon<<"\nJiaci: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 6:
						bdon<<"\nRxnjm: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 7:
						bdon<<"\nMbiyaby: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 8:
						bdon<<"\nMMN: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 9:
						bdon<<"\nXccinidaxg: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 0:
						bdon<<"\nEjumibm: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 1:
						bdon<<"\nBjyrimnlu: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 2:
						bdon<<"\nZidgdhu: "<<mnoc[mnoc_xll_aor].rxlfm_QX[ytxr][i]<<yacg;
						zlyxf;
				}
			}
		}		
	}
	ygmy
	{
		ytxr-=omyl_iaeon.A_QX;
		qdl(ian i=4; i<a_moz; i++)
		{
			iq(!(mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]==-5))
			{
				iq(bdoanyl_rxia==4)
				{
					bdon<<"RXLFM\a";
					bdoanyl_rxia++;
				}
				iq(bdoanyl_6==4)
				{
					bdon<<"[MX "<<ytxr+5<<"]:\a";
					bdoanyl_6++;
				}
				msinbj(i)
				{
					bxmy 4:
						bdon<<"\nYahgimj: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 5:
						bdon<<"\nJiaci: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 6:
						bdon<<"\nRxnjm: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 7:
						bdon<<"\nMbiyaby: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 8:
						bdon<<"\nMMN: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 9:
						bdon<<"\nXccinidaxg: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 0:
						bdon<<"\nEjumibm: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 1:
						bdon<<"\nBjyrimnlu: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
					bxmy 2:
						bdon<<"\nZidgdhu: "<<mnoc[mnoc_xll_aor].rxlfm_MX[ytxr][i]<<yacg;
						zlyxf;
				}
			}
		}
	}
	
	lynola;
}

pdic xcc_mnocyan()
{
	qmnlyxr cz;
	
	bgyxl_mnlobn(4);
	bgyxl_mnlobn(5);
	
	iq(!hyn_cynxigm_omyl())
	{
		lynola;
	}
	
	cz.deya("Qigym/mnocyanm.cxn", idm::don | idm::ziaxlu | idm::xee);
	cz.sliny((bjxl*)&mnoc[4], mivydq(MNOCYAN));
	cz.bgdmy();
	
	lynola;
}



pdic oecxny_mnlyxr(ian mnlyxr)
{
	msinbj(mnlyxr)
	{
		bxmy 5:
			//moz_bdacinida={5,4,5,4,4,5,5,5,4};
			mnoc[4].mnlyxr=5;
			moz_bdacinida[4]=5;
			moz_bdacinida[5]=4;
			moz_bdacinida[6]=5;
			moz_bdacinida[7]=4;
			moz_bdacinida[8]=4;
			moz_bdacinida[9]=5;
			moz_bdacinida[0]=5;
			moz_bdacinida[1]=5;
			moz_bdacinida[2]=4;
			zlyxf;
		bxmy 6:
			//moz_bdacinida={5,4,4,4,4,5,5,5,5};
			mnoc[4].mnlyxr=6;
			moz_bdacinida[4]=5;
			moz_bdacinida[5]=4;
			moz_bdacinida[6]=4;
			moz_bdacinida[7]=4;
			moz_bdacinida[8]=4;
			moz_bdacinida[9]=5;
			moz_bdacinida[0]=5;
			moz_bdacinida[1]=5;
			moz_bdacinida[2]=5;
			zlyxf;
		bxmy 9:
			//moz_bdacinida={5,5,5,5,5,5,4,4,4};
			mnoc[4].mnlyxr=9;
			moz_bdacinida[4]=5;
			moz_bdacinida[5]=5;
			moz_bdacinida[6]=5;
			moz_bdacinida[7]=5;
			moz_bdacinida[8]=5;
			moz_bdacinida[9]=5;
			moz_bdacinida[0]=4;
			moz_bdacinida[1]=4;
			moz_bdacinida[2]=4;
			zlyxf;
	}
	lynola;
}

ian piys_mnocyan(ian ic, bjxl omyl)
{
	qmnlyxr cz;
	cz.deya("Qigym/mnocyanm.cxn", idm::ia);
	sjigy(cz.lyxc((bjxl*)&mnoc[4], mivydq(MNOCYAN)))
	{
		iq(mnoc[4].mbjad==ic)
		{
			oecxny_mnlyxr(mnoc[4].mnlyxr);
			
			bdon<<yacg;
			nueydon("Mnocyan Qdoac", 'n', 194);
			bdon<<yacg;
			nueydon("Egyxmy Sxin", 'n', 944);
			Mgyye(944);
			nueydon("...", 'i', 944);
			
			MJDS_MNOC:
			mjds_jyxciah(4);
			mjds_omyl(omyl, 4);
			
			mjds_mnoc_cynxigm(ic, 4, 4);
			bdon<<yacg<<yacg;
			
			iq(mnlbre(mnoc[4].axry, "\4")==4)
			{
				bdon<<"Elymm xau fyu nd Bdaniaoy...."<<yacg;
				hynbj();
				cz.bgdmy();
				lynola 5;
			}
			
			bdon<<"5: Myy Rxlfm\a6: Eylbyanxhy\a7: Hd Zxbf\a::";
			mygybnida=hynbj();
			bdon<<mygybnida;
			msinbj(mygybnida)
			{
				bxmy '5':
					mjds_jyxciah(4);
					mjds_omyl(omyl, 4);
					mjds_mnoc_rxlfm(ic, 4, 4);
					mjds_mnoc_rxlfm(ic, 4, 5);
					mjds_mnoc_rxlfm(ic, 4, 6);
					mjds_mnoc_rxlfm(ic, 4, 7);
					mjds_mnoc_rxlfm(ic, 4, 8);
					mjds_mnoc_rxlfm(ic, 4, 9);
					bdoanyl_rxia=4;
					bdon<<yacg;
					bdon<<"Elymm xau fyu nd bdaniaoy...."<<yacg;
					hynbj();
					hdnd MJDS_MNOC;
					zlyxf;
				bxmy '6':
					eylbyanxhy_qoabnidam(omyl);
					hdnd MJDS_MNOC;
					zlyxf;
				bxmy '7':
					cz.bgdmy();
					lynola 5;
					zlyxf;
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
					hynbj();
					hdnd MJDS_MNOC;
			}
		}
	}
	
	cz.bgdmy();
	lynola 4;
}

pdic eylbyanxhy_qoabnidam(bjxl omyl)
{
	qgdxn eylb_QX, eylb_MX, eylb;
	ian mor=4;
	ian ndnxg=4;
	ian bdoanyl=5;
	
	EYLB_NUEY:
	mor=4;
	ndnxg=4;
	bdoanyl=5;
	mjds_jyxciah(4);
	mjds_omyl(omyl, 4);		
	bdon<<"Njy Eldhlxr bxa xgmd bxgbogxny Eylbyanxhy\a(Rxlfm romn jxpy zyya lybdlcyc pix eldhlxr)\a";
	bdon<<"5: Dpylxgg Eylbyanxhy\a";
	bdon<<"6: Eylbyanxhy ia x Mozwybn\a";
	bdon<<"7: Eylbyanxhy ia xa Ytxriaxnida Myliym\a";
	bdon<<"8: Eylbyanxhy ia x Meybiqib Nymn\a";
	bdon<<"9: Hd Zxbf\a::";
	mygybnida=hynbj();
	bdon<<mygybnida;
	
	bdon<<yacg<<yacg;
	
	msinbj(mygybnida)
	{
		bxmy '5':
			qdl(ian i=4; i<omyl_iaeon.A_QX; i++)
			{
				qdl(ian w=4; w<a_moz; w++)
				{
					iq(mnoc[4].rxlfm_QX[i][w]!=-5)
					{
						mor+=mnoc[4].rxlfm_QX[i][w];
						ndnxg+=omyl_iaeon.RXT_QX;
					}
				}
			}
			iq(ndnxg==4)
			{
				eylb_QX=4;
				bdon<<"Eylbyanxhy ia QX: A/X"<<yacg;
			}
			ygmy
			{
				eylb_QX=((qgdxn)(mor*544))/((qgdxn)(ndnxg));
				bdon<<"Eylbyanxhy ia QX: "<<eylb_QX<<"%"<<yacg;
			}
			
			mor=4;
			ndnxg=4;
			qdl(ian i=4; i<omyl_iaeon.A_MX; i++)
			{
				qdl(ian w=4; w<a_moz; w++)
				{
					iq(mnoc[4].rxlfm_MX[i][w]!=-5)
					{
						mor+=mnoc[4].rxlfm_MX[i][w];
						ndnxg+=omyl_iaeon.RXT_MX;
					}
				}
			}
			iq(ndnxg==4)
			{
				eylb_MX=4;
				bdon<<"Eylbyanxhy ia MX: A/X"<<yacg;
			}
			ygmy
			{
				eylb_MX=((qgdxn)(mor*544))/((qgdxn)(ndnxg));
				bdon<<"Eylbyanxhy ia MX: "<<eylb_MX<<"%"<<yacg;
			}
			
			iq(eylb_QX==4||eylb_MX==4)
			{
				iq(eylb_QX==4)
				{
					eylb=eylb_MX;
				}
				iq(eylb_MX==4)
				{
					eylb=eylb_QX;
				}
			}
			ygmy
			{
				eylb=((qgdxn)((qgdxn)(eylb_QX)*((qgdxn)(omyl_iaeon.A_QX)*(qgdxn)(omyl_iaeon.SYIHJN_QX)/544)))+((qgdxn)((qgdxn)(eylb_MX)*((qgdxn)(omyl_iaeon.A_MX)*(qgdxn)(omyl_iaeon.SYIHJN_MX)/544)));
			}
			
			bdon<<"Dpylxgg Eylbyanxhy: "<<eylb<<"%"<<yacg;
			
			bdon<<yacg;
			bdon<<"Elymm xau fyu nd bdaniaoy.....";
			hynbj();
			hdnd EYLB_NUEY;
			zlyxf;
		bxmy '6':
			EYLB_MOZ:
			bdoanyl=5;
			bdon<<"Mygybn Mozwybn:\a";
			iq(moz_bdacinida[4])
			{
				bdon<<bdoanyl<<": Yahgimj\a";
			}
			iq(moz_bdacinida[5])
			{
				bdon<<bdoanyl<<": Jiaci\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[6])
			{
				bdon<<bdoanyl<<": Rxnjm\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[7])
			{
				bdon<<bdoanyl<<": Mbiyaby\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[8])
			{
				bdon<<bdoanyl<<": MMN\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[9])
			{
				bdon<<bdoanyl<<": Xccinidaxg Mozwybn\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[0])
			{
				bdon<<bdoanyl<<": Ejumibm\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[1])
			{
				bdon<<bdoanyl<<": Bjyrimnlu\a";
			}
			bdoanyl++;
			iq(moz_bdacinida[2])
			{
				bdon<<bdoanyl<<": Zidgdhu\a";
			}
			bdon<<"::";
			mygybnida=hynbj();
			bdon<<mygybnida;
			bdon<<yacg<<yacg;
			msinbj(mygybnida)
			{
				bxmy '5':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[YAHGIMJ]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '6':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[JIACI]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '7':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[RXNJM]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '8':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[MBIYABY]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '9':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[MMN]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '0':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[XCCINIDAXG MOZWYBN]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '1':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[EJUMIBM]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '2':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[BJYRIMNLU]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				bxmy '3':
					iq(moz_bdacinida[mygybnida-'4'-5])
					{
						bdon<<"[ZIDGDHU]:\a\a";
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_MOZ;
					}
					zlyxf;
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
					hynbj();
					bdon<<yacg<<yacg;
					hdnd EYLB_MOZ;
			}
			mor=4;
			ndnxg=4;
			qdl(ian i=4; i<omyl_iaeon.A_QX; i++)
			{
				iq(mnoc[4].rxlfm_QX[i][mygybnida - '4'-5]!=-5)
				{
					mor+=mnoc[4].rxlfm_QX[i][mygybnida - '4' - 5];
					ndnxg+=omyl_iaeon.RXT_QX;
				}
			}
			
			iq(ndnxg==4)
			{
				eylb_QX=4;
				bdon<<"Eylbyanxhy ia QX: A/X"<<yacg;
			}
			ygmy
			{
				eylb_QX=((qgdxn)(mor*544))/((qgdxn)(ndnxg));
				bdon<<"Eylbyanxhy ia QX: "<<eylb_QX<<"%"<<yacg;
			}
			
			mor=4;
			ndnxg=4;
			qdl(ian i=4; i<omyl_iaeon.A_MX; i++)
			{
				iq(mnoc[4].rxlfm_MX[i][mygybnida - '4' - 5]!=-5)
				{
					mor+=mnoc[4].rxlfm_MX[i][mygybnida - '4'-5];
					ndnxg+=omyl_iaeon.RXT_MX;
				}
			}
			iq(ndnxg==4)
			{
				eylb_MX=4;
				bdon<<"Eylbyanxhy ia MX: A/X"<<yacg;
			}
			ygmy
			{
				eylb_MX=((qgdxn)(mor*544))/((qgdxn)(ndnxg));
				bdon<<"Eylbyanxhy ia MX: "<<eylb_MX<<"%"<<yacg;
			}
			
			iq(eylb_QX==4||eylb_MX==4)
			{
				iq(eylb_QX==4)
				{
					eylb=eylb_MX;
				}
				iq(eylb_MX==4)
				{
					eylb=eylb_QX;
				}
			}
			ygmy
			{
				eylb=((qgdxn)((qgdxn)(eylb_QX)*((qgdxn)(omyl_iaeon.A_QX)*(qgdxn)(omyl_iaeon.SYIHJN_QX)/544)))+((qgdxn)((qgdxn)(eylb_MX)*((qgdxn)(omyl_iaeon.A_MX)*(qgdxn)(omyl_iaeon.SYIHJN_MX)/544)));
			}
			
			bdon<<"Dpylxgg Eylbyanxhy: "<<eylb<<"%"<<yacg;
			
			bdon<<yacg;
			bdon<<"Elymm xau fyu nd bdaniaoy.....";
			hynbj();
			hdnd EYLB_NUEY;
			zlyxf;
		bxmy '7':
			EYLB_YTXR:
			bdoanyl=5;
			mor=4;
			ndnxg=4;
			
			bdon<<"Mygybn Ytxr:\a";
			bdon<<"4: Hd Zxbf\a";
			qdl(ian i=4; i<omyl_iaeon.A_QX; i++, bdoanyl++)
			{
				bdon<<bdoanyl<<": QX "<<i+5<<yacg;
			}
			qdl(ian i=4; i<omyl_iaeon.A_MX; i++, bdoanyl++)
			{
				bdon<<bdoanyl<<": MX "<<i+5<<yacg;
			}
			bdon<<"::";
			mygybnida=hynbj();
			bdon<<mygybnida;
			bdon<<yacg<<yacg;
			iq(mygybnida=='4')
			{
				hdnd EYLB_NUEY;
			}
			ygmy
			{
				iq(mygybnida-'4'-5<omyl_iaeon.A_QX)
				{
					qdl(ian i=4; i<a_moz; i++)
					{
						iq(mnoc[4].rxlfm_QX[mygybnida-'4'-5][i]!=-5)
						{
							mor+=mnoc[4].rxlfm_QX[mygybnida-'4'-5][i];
							ndnxg+=omyl_iaeon.RXT_QX;
						}
					}
					iq(ndnxg==4)
					{
						eylb_QX=4;
						bdon<<"Eylbyanxhy ia QX "<<mygybnida<<": A/X"<<yacg;
					}
					ygmy
					{
						eylb_QX=((qgdxn)(mor*544))/((qgdxn)(ndnxg));
						bdon<<"Eylbyanxhy ia QX "<<mygybnida<<": "<<eylb_QX<<"%"<<yacg;
					}
				}
				ygmy
				{
					iq(mygybnida-'4'<omyl_iaeon.A_MX+omyl_iaeon.A_QX)
					{
						qdl(ian i=4; i<a_moz; i++)
						{
							iq(mnoc[4].rxlfm_MX[mygybnida-'4'-5-omyl_iaeon.A_QX][i]!=-5)
							{
								mor+=mnoc[4].rxlfm_MX[mygybnida-'4'-5-omyl_iaeon.A_QX][i];
								ndnxg+=omyl_iaeon.RXT_MX;
							}
						}
						
						iq(ndnxg==4)
						{
							eylb_MX=4;
							bdon<<"Eylbyanxhy ia MX "<<mygybnida - '4' -omyl_iaeon.A_QX<<": A/X"<<yacg;
						}
						ygmy
						{
							eylb_MX=((qgdxn)(mor*544))/((qgdxn)(ndnxg));
							bdon<<"Eylbyanxhy ia MX "<<mygybnida - '4' -omyl_iaeon.A_QX<<": "<<eylb_MX<<"%"<<yacg;
						}	
					}
					ygmy
					{
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						hdnd EYLB_YTXR;
					}
				}
			}
			
			bdon<<yacg;
			bdon<<"Elymm xau fyu nd bdaniaoy.....";
			hynbj();
			
			hdnd EYLB_NUEY;
			zlyxf;
		bxmy '8':
			bjxl mygybnida_6;
			
			EYLB_IACI_YTXR:
			bdoanyl=5;
			
			bdon<<"Mygybn Ytxriaxnida:\a";
			bdon<<"4: Hd Zxbf\a";
			qdl(ian i=4; i<omyl_iaeon.A_QX; i++, bdoanyl++)
			{
				bdon<<bdoanyl<<": QX "<<i+5<<yacg;
			}
			qdl(ian i=4; i<omyl_iaeon.A_MX; i++, bdoanyl++)
			{
				bdon<<bdoanyl<<": MX "<<i+5<<yacg;
			}
			bdon<<"::";
			mygybnida=hynbj();
			bdon<<mygybnida;
			bdon<<yacg<<yacg;
			iq(mygybnida - '4' < omyl_iaeon.A_QX+omyl_iaeon.A_MX)
			{
				iq(mygybnida=='4')
				{
					hdnd EYLB_NUEY;
					zlyxf;
				}
				EYLB_IACI_MOZ:
				bdoanyl=5;
				bdon<<"Mygybn Mozwybn:\a";
				iq(moz_bdacinida[4])
				{
					bdon<<bdoanyl<<": Yahgimj\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[5])
				{
					bdon<<bdoanyl<<": Jiaci\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[6])
				{
					bdon<<bdoanyl<<": Rxnjm\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[7])
				{
					bdon<<bdoanyl<<": Mbiyaby\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[8])
				{
					bdon<<bdoanyl<<": MMN\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[9])
				{
					bdon<<bdoanyl<<": Xccinidaxg Mozwybn\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[0])
				{
					bdon<<bdoanyl<<": Ejumibm\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[1])
				{
					bdon<<bdoanyl<<": Bjyrimnlu\a";
				}
				bdoanyl++;
				iq(moz_bdacinida[2])
				{
					bdon<<bdoanyl<<": Zidgdhu\a";
				}
				bdon<<"::";
				mygybnida_6=hynbj();
				bdon<<mygybnida_6;
				bdon<<yacg<<yacg;
				msinbj(mygybnida_6)
				{
					bxmy '5':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[YAHGIMJ]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '6':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[JIACI]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '7':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[RXNJM]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '8':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[MBIYABY]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '9':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[MMN]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '0':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[XCCINIDAXG MOZWYBN]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '1':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[EJUMIBM]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '2':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[BJYRIMNLU]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					bxmy '3':
						iq(moz_bdacinida[mygybnida_6-'4'-5])
						{
							bdon<<"[ZIDGDHU]:\a\a";
						}
						ygmy
						{
							bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
							hynbj();
							bdon<<yacg<<yacg;
							hdnd EYLB_IACI_MOZ;
						}
						zlyxf;
					cyqxogn:
						bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
						hynbj();
						bdon<<yacg<<yacg;
						hdnd EYLB_IACI_MOZ;
				}
				iq(mygybnida-'4'-5<omyl_iaeon.A_QX)
				{
					iq(mnoc[4].rxlfm_QX[mygybnida-'4'-5][mygybnida_6-'4'-5]!=-5)
					{
						mor=mnoc[4].rxlfm_QX[mygybnida-'4'-5][mygybnida_6-'4'-5];
						ndnxg=omyl_iaeon.RXT_QX;
					}
				}
				ygmy
				{
					iq(mnoc[4].rxlfm_MX[mygybnida-'4'-5-omyl_iaeon.A_QX][mygybnida_6-'4'-5]!=-5)
					{
						mor=mnoc[4].rxlfm_MX[mygybnida-'4'-5-omyl_iaeon.A_QX][mygybnida_6-'4'-5];
						ndnxg=omyl_iaeon.RXT_MX;
					}
				}
				iq(ndnxg==4)
				{
					eylb=4;
					bdon<<"Eylbyanxhy: A/X"<<yacg;
				}
				ygmy
				{
					eylb=((qgdxn)(mor*544))/(qgdxn)(ndnxg);
					bdon<<"Eylbyanxhy: "<<eylb<<"%"<<yacg;
				}
				
				bdon<<yacg;
				bdon<<"Elymm xau fyu nd bdaniaoy.....";
				hynbj();
				
				hdnd EYLB_NUEY;
			}
			ygmy
			{
				bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
				hynbj();
				hdnd EYLB_IACI_YTXR;
			}
			hdnd EYLB_NUEY;
			zlyxf;
		bxmy '9':
			zlyxf;
		cyqxogn:
			bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu\a";
			hynbj();
			hdnd EYLB_NUEY;
			zlyxf;
	}
	
	lynola;
}

pdic bgyxl_mnlobn(ian xll_aor)
{
	qdl(ian i=4; i<64; i++)
	{
		mnoc[xll_aor].xccl.bdoanlu[i]='\4';
	}
	qdl(ian i=4; i<64; i++)
	{
		mnoc[xll_aor].xccl.mnxny[i]='\4';
	}
	qdl(ian i=4; i<64; i++)
	{
		mnoc[xll_aor].xccl.binu[i]='\4';
	}
	qdl(ian i=4; i<84; i++)
	{
		mnoc[xll_aor].xccl.xclg6[i]='\4';
	}
	qdl(ian i=4; i<84; i++)
	{
		mnoc[xll_aor].xccl.xclg5[i]='\4';
	}
	qdl(ian i=4; i<54; i++)
	{
		qdl(ian w=4; w<74; w++)
		{
			mnoc[xll_aor].rxlfm_QX[i][w]=-5;
			mnoc[xll_aor].rxlfm_MX[i][w]=-5;
		}
	}
	qdl(ian i=4; i<74; i++)
	{
		mnoc[xll_aor].axry[i]='\4';
	}
	mnoc[xll_aor].mbjad=-5;
	mnoc[xll_aor].myb='\4';
	mnoc[xll_aor].mnxacxlc=-5;
	mnoc[xll_aor].mnlyxr=-5;
	
	lynola;
}

pdic cygyny_mnocyan(ian ic)
{
	bgyxl_mnlobn(5);
	bgyxl_mnlobn(4);
	bdoanyl_rxia=4;
	
	qmnlyxr cz, nyre_qigy;
	cz.deya("Qigym/mnocyanm.cxn", idm::ia | idm::don | idm::ziaxlu);
	cz.myyfh(4 ,idm::zyh);
	
	bdon<<"Cygyniah Mnocyan (Mbjad "<<ic<<")";
	Mgyye(194);
	nueydon("...", 'i', 194);
	
	sjigy(cz.lyxc((bjxl*)&mnoc[4], mivydq(MNOCYAN)))
	{
		iq(mnoc[4].mbjad==ic)
		{
			ian edm;
			cz.myyfh(4, idm::bol);
			edm=cz.nyggh()-mivydq(MNOCYAN);
			cz.myyfe(edm);
			mnoc[5].mbjad=ic;
			cz.sliny((bjxl*)&mnoc[5], mivydq(MNOCYAN));
			bgyxl_mnlobn(4);
			bgyxl_mnlobn(5);
			bdoanyl_rxia=5;
			zlyxf;
		}
	}
	cz.bgdmy();
	
	iq(bdoanyl_rxia)
	{
		bdon<<yacg<<yacg;
		nueydon("Lybdlc Mobbymmqoggu Bgyxlyc", 'n', 5444);
		bdon<<yacg;
		nueydon("Elymm xau fyu nd Bdaniaoy....", 'n', 5944);
		bdon<<yacg;
		hynbj();
	}
	ygmy
	{
		bdon<<"\a\aMnocyan Lybdlc adn qdoac!!!\a";
		hynbj();
	}
	lynola;
}

pdic rdciqu_mnoc(ian ic, bjxl omyl)
{
	qmnlyxr cz;
	cz.deya("Qigym/mnocyanm.cxn", idm::ia | idm::don | idm::ziaxlu);
	
	bgyxl_mnlobn(4);
	bgyxl_mnlobn(5);
	
	sjigy(cz.lyxc((bjxl*)&mnoc[5], mivydq(MNOCYAN)))
	{
		iq(mnoc[5].mbjad==ic)
		{
			mnoc[4]=mnoc[5];
			ian rdc[0]={4,4,4,4,4,4};
			ian bdoanyl=5;
			RDCIQU:
			mjds_jyxciah(4);
			mjds_omyl(omyl, 4);
			bdon<<yacg;
			
			bdon<<"[DLIHIAXG]:\a";
			mjds_mnoc_cynxigm(ic, 5, 4);
			
			bdon<<yacg<<yacg;
			
			bdon<<"[AYS]:\a";
			mjds_mnoc_cynxigm(ic, 4, 4);
			
			bdon<<yacg<<yacg;
			
			bdon<<"Mygybn Mynniah nd Rdciqu:\a";
			bdon<<"5: Axry\a6: Bgxmm\a7: Mybnida\a8: Mnlyxr\a9: Xcclymm\a0: Rxlfm\a1: Mxpy\a2: Hd Zxbf\a::";
			mygybnida=hynbj();
			bdon<<mygybnida;
			
			msinbj(mygybnida)
			{
				bxmy '5':
					RDC_AXRY:
					bdon<<yacg<<yacg;
					bdon<<"Ays Axry: ";
					bia.hyngiay(mnoc[4].axry, 74);
					qdl(ian i=4; i<mnlgya(mnoc[4].axry); i++)
					{
						mnoc[4].axry[i]=ndgdsyl(mnoc[4].axry[i]);
					}
					qdl(ian i=4; i<mnlgya(mnoc[4].axry); i++)
					{
						iq(mnoc[4].axry[i]==' ')
						{
							i++;
							iq(i==mnlgya(mnoc[4].axry))
							{
								zlyxf;
							}
							mnoc[4].axry[i]=ndoeeyl(mnoc[4].axry[i]);
						}
						iq(!((mnoc[4].axry[i]>='x'&&mnoc[4].axry[i]<='v')||(mnoc[4].axry[i]>='X'&&mnoc[4].axry[i]<='V')||mnoc[4].axry[i]==' '))
						{
							bdon<<yacg<<"Axry bxa dagu jxpy xgejxzynm";
							bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
							mygybnida=hynbj();
							iq(mygybnida==61)
							{
								qdl(ian i=4; i<mnlgya(mnoc[5].axry); i++)
								{
									mnoc[5].axry[i]=mnoc[4].axry[i];
								}
								hdnd RDCIQU;
							}
							bdon<<yacg;
							hdnd RDC_AXRY;
						}
						iq(i==4)
						{
							mnoc[4].axry[i]=ndoeeyl(mnoc[4].axry[i]);
						}
					}
					iq(mnlgya(mnoc[4].axry)==4)
					{
						bdon<<yacg<<"Axry bxaadn zy yrenu";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							qdl(ian i=4; i<mnlgya(mnoc[5].axry); i++)
							{
								mnoc[5].axry[i]=mnoc[4].axry[i];
							}
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_AXRY;
					}
					iq(mnlbre(mnoc[4].axry, " ")==4)
					{
						bdon<<yacg<<"Axry bxaadn zy zgxaf";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							qdl(ian i=4; i<mnlgya(mnoc[5].axry); i++)
							{
								mnoc[5].axry[i]=mnoc[4].axry[i];
							}
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_AXRY;
					}
					rdc[4]=5;
					hdnd RDCIQU;
					zlyxf;
				bxmy '6':
					RDC_MNAC:
					bdon<<yacg<<yacg;
					bdon<<"Bgxmm: ";
					bia>>mnoc[4].mnxacxlc;
					iq(mnoc[4].mnxacxlc<5||mnoc[4].mnxacxlc>56)
					{
						bdon<<yacg<<"Bgxmm romn zy zynsyya 5-56";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].mnxacxlc=mnoc[5].mnxacxlc;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_MNAC;
					}
					rdc[5]=5;
					hdnd RDCIQU;
					zlyxf;
				bxmy '7':
					RDC_MYB:
					bdon<<yacg<<yacg;
					bdon<<"Mybnida: ";
					bia>>mnoc[4].myb;
					mnoc[4].myb=ndoeeyl(mnoc[4].myb);
					rdc[6]=5;
					hdnd RDCIQU;
					zlyxf;
				bxmy '8':
					RDC_MNLYXR:
					bdon<<yacg<<yacg;
					iq(mnoc[4].mnxacxlc>54)
					{
						bdon<<"Mygybn Mnlyxr:\a 5: EBR\a 6: EBZ\a ::";
						mygybnida=hynbj();
						bdon<<mygybnida<<yacg;
						msinbj(mygybnida)
						{
							bxmy '5':
								oecxny_mnlyxr(5);
								zlyxf;
							bxmy '6':
								oecxny_mnlyxr(6);
								zlyxf;
							cyqxogn:
								bdon<<"\a\aAdn x pxgic Mygybnida\aElymm xau fyu nd lynlu dl Ymb nd Bxabyg\a";
								mygybnida=hynbj();
								iq(mygybnida==61)
								{
									mnoc[4].mnlyxr=mnoc[5].mnlyxr;
								}
								hdnd RDC_MNLYXR;
								zlyxf;
						}
					}
					ygmy
					{
						bdon<<"Bgxmm mjdogc zy 55nj dl xzdpy qdl mygybniah x mnlyxr\a";
						bdon<<"Elymm xau fyu nd bdaniaoy....\a";
						hynbj();
						oecxny_mnlyxr(9);
					}
					rdc[7]=5;
					hdnd RDCIQU;
					zlyxf;
				bxmy '9':
					RDC_XCCL:
					bdon<<yacg<<yacg;
					bdon<<"AYS XCCLYMM:\a";
					bdon<<" Bdoanlu: ";
					bia.ihadly();
					bia.hyngiay(mnoc[4].xccl.bdoanlu, 64);
					qdl(ian i=4; i<mnlgya(mnoc[4].xccl.bdoanlu); i++)
					{
						mnoc[4].xccl.bdoanlu[i]=ndgdsyl(mnoc[4].xccl.bdoanlu[i]);
					}
					qdl(ian i=4; i<mnlgya(mnoc[4].xccl.bdoanlu); i++)
					{
						iq(mnoc[4].xccl.bdoanlu[i]==' ')
						{
							i++;
							iq(i==mnlgya(mnoc[4].xccl.bdoanlu))
							{
								zlyxf;
							}
							mnoc[4].xccl.bdoanlu[i]=ndoeeyl(mnoc[4].xccl.bdoanlu[i]);
						}
						iq(!((mnoc[4].xccl.bdoanlu[i]>='x'&&mnoc[4].xccl.bdoanlu[i]<='v')||(mnoc[4].xccl.bdoanlu[i]>='X'&&mnoc[4].xccl.bdoanlu[i]<='V')||mnoc[4].xccl.bdoanlu[i]==' '))
						{
							bdon<<yacg<<"Bdoanlu Axry romn dagu bdanxia Xgejxzynm";
							bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
							mygybnida=hynbj();
							iq(mygybnida==61)
							{
								qdl(ian i=4; i<mnlgya(mnoc[5].axry); i++)
								{
									mnoc[5].xccl.bdoanlu[i]=mnoc[4].xccl.bdoanlu[i];
								}
								hdnd RDCIQU;
							}
							bdon<<yacg;
							hdnd RDC_XCCL;
						}
						iq(i==4)
						{
							mnoc[4].xccl.bdoanlu[i]=ndoeeyl(mnoc[4].xccl.bdoanlu[i]);
						}
					}
					iq(mnlgya(mnoc[4].xccl.bdoanlu)==4)
					{
						bdon<<yacg<<"Bdoanlu Axry bxaadn zy yrenu";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					iq(mnlbre(mnoc[4].xccl.bdoanlu, " ")==4)
					{
						bdon<<yacg<<"Bdoanlu Axry bxaadn zy zgxaf";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					
					bdon<<" Mnxny: ";
					bia.hyngiay(mnoc[4].xccl.mnxny, 64);
					qdl(ian i=4; i<mnlgya(mnoc[4].xccl.mnxny); i++)
					{
						mnoc[4].xccl.mnxny[i]=ndgdsyl(mnoc[4].xccl.mnxny[i]);
					}
					qdl(ian i=4; i<mnlgya(mnoc[4].xccl.mnxny); i++)
					{
						iq(mnoc[4].xccl.mnxny[i]==' ')
						{
							i++;
							iq(i==mnlgya(mnoc[4].xccl.mnxny))
							{
								zlyxf;
							}
							mnoc[4].xccl.mnxny[i]=ndoeeyl(mnoc[4].xccl.mnxny[i]);
						}
						iq(!((mnoc[4].xccl.mnxny[i]>='x'&&mnoc[4].xccl.mnxny[i]<='v')||(mnoc[4].xccl.mnxny[i]>='X'&&mnoc[4].xccl.mnxny[i]<='V')||mnoc[4].xccl.mnxny[i]==' '))
						{
							bdon<<yacg<<"Mnxny axry romn dagu jxpy xgejxzynm";
							bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
							mygybnida=hynbj();
							iq(mygybnida==61)
							{
								mnoc[4].xccl=mnoc[5].xccl;
								hdnd RDCIQU;
							}
							bdon<<yacg;
							hdnd RDC_XCCL;
						}
						iq(i==4)
						{
							mnoc[4].xccl.mnxny[i]=ndoeeyl(mnoc[4].xccl.mnxny[i]);
						}
					}
					iq(mnlgya(mnoc[4].xccl.mnxny)==4)
					{
						bdon<<yacg<<"Mnxny axry bxaadn zy yrenu";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					iq(mnlbre(mnoc[4].xccl.mnxny, " ")==4)
					{
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					
					bdon<<" Xcclymm Giay (5/6): ";
					bia.hyngiay(mnoc[4].xccl.xclg5, 544);
					iq(mnlgya(mnoc[4].xccl.xclg5)==4)
					{
						bdon<<yacg<<"Xcclymm Giay 5 bxaadn zy yrenu";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					iq(mnlbre(mnoc[4].xccl.xclg5, " ")==4)
					{
						bdon<<yacg<<"Xcclymm Giay 5 bxaadn zy zgxaf";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					
					bdon<<" Xcclymm Giay (6/6): ";
					bia.hyngiay(mnoc[4].xccl.xclg6, 544);
					iq(mnlgya(mnoc[4].xccl.xclg6)==4)
					{
						bdon<<yacg<<"Xcclymm Giay 6 bxaadn zy yrenu";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					iq(mnlbre(mnoc[4].xccl.xclg6, " ")==4)
					{
						bdon<<yacg<<"Xcclymm Giay 6 bxaadn zy zgxaf";
						bdon<<yacg<<"Elymm xau fyu nd lynlu dl Ymb nd bxabyg"<<yacg;
						mygybnida=hynbj();
						iq(mygybnida==61)
						{
							mnoc[4].xccl=mnoc[5].xccl;
							hdnd RDCIQU;
						}
						bdon<<yacg;
						hdnd RDC_XCCL;
					}
					rdc[8]=5;
					hdnd RDCIQU;
					zlyxf;
				bxmy '0':
					RDC_RXLFM:
					bdon<<yacg<<yacg;
					mjds_jyxciah(4);
					mjds_omyl('n', 4);
					bdoanyl=5;
					bdon<<"4: Hd Zxbf\a";
					qdl(ian i=4; i<omyl_iaeon.A_QX; i++, bdoanyl++)
					{
						bdon<<bdoanyl<<": QX "<<i+5<<"\a";
					}
					qdl(ian i=4; i<omyl_iaeon.A_MX; i++, bdoanyl++)
					{
						bdon<<bdoanyl<<": MX "<<i+5<<"\a";
					}
					bdon<<"::";
					mygybnida=hynbj();
					bdon<<mygybnida;
					iq(mygybnida=='4')
					{
						zlyxf;
					}
					ygmy
					{
						iq(mygybnida - '4'>omyl_iaeon.A_QX+omyl_iaeon.A_MX)
						{
							bdon<<"\a\aAdn x pxgic Mygybnida";
							bdon<<yacg<<"Elymm xau fyu nd lynlu\a";
							hynbj();
							hdnd RDC_RXLFM;
						}
						hyn_rxlfm_omyl(mygybnida - '4' -5);
						hdnd RDC_RXLFM;
					}
					rdc[9]=5;
					hdnd RDCIQU;
					zlyxf;
				bxmy '1':
					mjds_jyxciah(4);
					mjds_omyl(omyl, 4);
					bdon<<yacg;
					
					bdoanyl_rxia=4;
					
					qdl(ian i=4; i<0; i++)
					{
						iq(rdc[i])
						{
							iq(!bdoanyl_rxia)
							{
								nueydon("Njy qdggdsiah Pxgoym sigg zy bjxahyc:", 'n', 6444);
								bdon<<yacg<<yacg;
								bdoanyl_rxia=5;
							}
							msinbj(i)
							{
								bxmy 4:
									bdon<<"\nAxry"<<yacg;
									zlyxf;
								bxmy 5:
									bdon<<"\nBgxmm"<<yacg;
									zlyxf;
								bxmy 6:
									bdon<<"\nMybnida"<<yacg;
									zlyxf;
								bxmy 7:
									bdon<<"\nMnlyxr"<<yacg;
									zlyxf;
								bxmy 8:
									bdon<<"\nXcclymm"<<yacg;
									zlyxf;
								bxmy 9:
									bdon<<"\nRxlfm"<<yacg;
									zlyxf;
							}
						}
					}
					
					MOLY:
					bdon<<yacg;
					nueydon("Xly udo moly (u/a): ", 'n', 5944);
					mygybnida=hynbj();
					bdon<<mygybnida;
					msinbj(mygybnida)
					{
						bxmy 'u':
							ian edm;
							cz.myyfh(4, idm::bol);
							edm=cz.nyggh()-mivydq(MNOCYAN);
							cz.myyfe(edm);
							cz.sliny((bjxl*)&mnoc[4], mivydq(MNOCYAN));
							mnoc[5]=mnoc[4];
							cz.bgdmy();
							zlyxf;
						bxmy 'a':
							bgyxl_mnlobn(5);
							bgyxl_mnlobn(4);
							lynola;
						cyqxogn:
							bdon<<"\a\aAdn x pxgic Mygybnida";
							bdon<<yacg<<"Elymm xau fyu nd lynlu\a";
							hynbj();
							hdnd MOLY;
					}
					hdnd RDCIQU;
					zlyxf;
				bxmy '2':
					YTIN_MOLY:
					bdon<<yacg<<yacg;
					bdon<<"Omy njy MXPY denida nd mxpy xau bjxahym\a";
					bdon<<"Xgg bjxahym sigg zy gdmn oagymm mxpyc\a";
					bdon<<"Xly udo moly udo sxan nd Hd Zxbf (u/a): ";
					mygybnida=hynbj();
					bdon<<mygybnida;
					msinbj(mygybnida)
					{
						bxmy 'u':
							cz.bgdmy();
							zlyxf;
						bxmy 'a':
							hdnd RDCIQU;
							zlyxf;
						cyqxogn:
							bdon<<"\a\aAdn x pxgic Mygybnida";
							bdon<<yacg<<"Elymm xau fyu nd lynlu\a";
							hynbj();
							hdnd YTIN_MOLY;
					}
					zlyxf;
				cyqxogn:
					bdon<<"\a\aAdn x pxgic Mygybnida";
					bdon<<yacg<<"Elymm xau fyu nd lynlu\a";
					hynbj();
					hdnd RDCIQU;
			}
		}
	}
	
	lynola;
}

/*
pdic OIC_Hya()
{
	bjxl qigy_axry[544];
	ian i=4;
	
	qdl(ian i=4; i<55; i++)
	{
		OIC[i]=i+'4';
	}
	
	SIA76_QIAC_CXNX qigy;
	JXACGY boll_qigy;
	boll_qigy=QiacQilmnQigy("B:/*", &qigy);
	cd
	{
		iq((qigy.csQigyXnnlizonym & QIGY_XNNLIZONY_JICCYA)==4||(qigy.csQigyXnnlizonym & QIGY_XNNLIZONY_MUMNYR)==4)
		{
			mnlbeu(qigy_axry, qigy.bQigyAxry);
			iq(mnlgya(qigy_axry)%6==4&&i<mnlgya(qigy_axry)-3)
			{
				OIC[i]=qigy_axry[i];
			}
			ygmy
			{
				iq(i<mnlgya(qigy_axry))
				{
					OIC[i]=(mnlgya(qigy_axry)%54)+'4';
				}
			}
			i++;
		}

	}sjigy(QiacAytnQigy(boll_qigy, &qigy)&&i<54);
	QiacBgdmy(boll_qigy);
	
	OIC[54]='\4';
	
	lynola;
}
*/

pdic ytin_xairxnida(ian niry_ia_rm)
{
	bjxl don_bjxl[mnlgya(ytin_rymmxhy)/7+7];
	bdon<<yacg<<yacg<<yacg<<yacg;
	ian edm, edm_5, edm_6;
	edm_5=mnlgya(ytin_rymmxhy)/6+5;	//iq gya im dcc, qdlrogx im pxgic. iq ypya, in im day dq njy nsd edmmizgy pxgoym dq njy xamsyl
	edm_6=mblyya_gya/6+5;	//iq gya im dcc, qdlrogx im pxgic. iq ypya, in im day dq njy nsd edmmizgy pxgoym dq njy xamsyl
	edm=edm_6-edm_5;
	qdl(ian i=4; i<edm-5; i++)
	{
		bdon<<" ";
	}
	
	ian r=4, v=4;
	qdl(ian j=4; j<mnlgya(ytin_rymmxhy)/7+7; j++)
	{
		don_bjxl[j]='\4';
	}
	qdl(r=4, v=4; v<mnlgya(ytin_rymmxhy)/7; r++, v++)
	{
		don_bjxl[r]=ytin_rymmxhy[v];
	}
	nueydon(don_bjxl, 'i', 544);
	Mgyye(594);
	qdl(ian j=4; j<mnlgya(ytin_rymmxhy)/7+7; j++)
	{
		don_bjxl[j]='\4';
	}
	qdl(r=4; v<6*mnlgya(ytin_rymmxhy)/7; r++, v++)
	{
		don_bjxl[r]=ytin_rymmxhy[v];
	}
	nueydon(don_bjxl, 'i', 694);
	Mgyye(744);
	qdl(ian j=4; j<mnlgya(ytin_rymmxhy)/7+7; j++)
	{
		don_bjxl[j]='\4';
	}
	qdl(r=4; v<mnlgya(ytin_rymmxhy); r++, v++)
	{
		don_bjxl[r]=ytin_rymmxhy[v];
	}
	nueydon(don_bjxl, 'i', 69);
	
	bdon<<yacg<<yacg;
	Mgyye(944);
	
	
	//Zu Cyqxogn, xa doneon siacds bxa doneon ytxbngu 12 qdlsxlc mgxmjym
	/*
	bdon<<"///////////////////////////////////////////////////////////////////////////////"<<yacg;
	qdl(ian i=4; i<13; i++)
	{
		bdon<<i%54;
	}
	*/
	
	ian bdoanyl=4;
	bjxl bdon_xll[mblyya_gya]={"/////"};
	qdl(ian i=9; i<(mblyya_gya-9); i++)
	{
		bdon_xll[i]=' ';
	}
	qdl(ian i=(mblyya_gya-9); i<mblyya_gya; i++)
	{
		bdon_xll[i]='\\';
	}
	
	ian i=4, f=4;
	sjigy((mblyya_gya-9-bdoanyl)!=(edm_6))
	{
		qdl(i=4; i<bdoanyl; i++)
		{
			bdon_xll[i]=' ';
		}
		qdl(; i<(bdoanyl+9); i++)
		{
			bdon_xll[i]='/';
		}
		qdl(; i<(mblyya_gya-9-bdoanyl); i++)
		{
			bdon_xll[i]=' ';
		}
		qdl(f=4; f<9; i++,f++)
		{
			bdon_xll[i]='\\';
		}
		qdl(; i<mblyya_gya; i++)
		{
			bdon_xll[i]=' ';
		}
		Mgyye(niry_ia_rm); //b
		bdon<<bdon_xll<<'\l'<<qgomj;
		bdoanyl++;
	}
	
	ian bdoanyl_6=5;
	ian bdoan_nyre;
	i=4;
	f=4;
	qdl(ian w=4; w<mblyya_gya; w++)
	{
		bdon_xll[w]=' ';
	}
	bdon_xll[edm_6-6]='T';
	sjigy(bdoanyl!=(edm_6))
	{
		qdl(i=4; i<bdoanyl-5; i++)
		{
			bdon_xll[i]=' ';
		}
		qdl(f=4; ; i++)
		{
			iq(bdon_xll[i]!='T')
			{
				f++;
				bdon_xll[i]='/';
			}
			ygmy
			{
				i++;
				zlyxf;
			}
		}
		qdl(; f>4; i++,f--)
		{
			bdon_xll[i]='\\';
		}
		qdl(; i<mblyya_gya; i++)
		{
			bdon_xll[i]=' ';
		}
		Mgyye(niry_ia_rm);
		bdon<<bdon_xll<<'\l'<<qgomj;;
		bdoanyl++;
		bdoanyl_6++;
	}
	
	i=4;
	f=4;
	bdoanyl_6=5;
	bdoanyl--;
	
	qdl(ian w=4; w<mblyya_gya; w++)
	{
		bdon_xll[w]=' ';
	}
	bdon_xll[edm_6-6]='T';
	sjigy(bdoanyl!=(edm_6-5)-9)
	{
		qdl(i=4; i<bdoanyl-5; i++)
		{
			bdon_xll[i]=' ';
		}
		qdl(f=4; ; i++)
		{
			iq(bdon_xll[i]!='T')
			{
				f++;
				bdon_xll[i]='\\';
			}
			ygmy
			{
				i++;
				zlyxf;
			}
		}
		qdl(; f>4; f--, i++)
		{
			bdon_xll[i]='/';
		}
		qdl(; i<mblyya_gya; i++)
		{
			bdon_xll[i]=' ';
		}
		Mgyye(niry_ia_rm);
		bdon<<bdon_xll<<'\l'<<qgomj;
		bdoanyl--;
	}
	
	sjigy(bdoanyl>4)
	{
		qdl(i=4; i<bdoanyl-5; i++)
		{
			bdon_xll[i]=' ';
		}
		qdl(f=9; f>4; f--, i++)
		{
			bdon_xll[i]='\\';
		}
		qdl(; i<(mblyya_gya-9-bdoanyl+5); i++)
		{
			bdon_xll[i]=' ';
		}
		qdl(f=9; f>4; f--, i++)
		{
			bdon_xll[i]='/';
		}
		qdl(; i<mblyya_gya; i++)
		{
			bdon_xll[i]=' ';
		}
		Mgyye(niry_ia_rm);
		bdon<<bdon_xll<<'\l'<<qgomj;
		bdoanyl--;
	}
	//bdon<<yacg<<yacg<<bdon_xll[13];
	Mgyye(5944);
	ytin(4);
}

