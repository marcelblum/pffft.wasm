
const float hamming_window_1024[] = {
0.08000000000000007,
0.08000867630758934,
0.08003470490305992,
0.08007808480453332,
0.08013881437558612,
0.08021689132531201,
0.08031231270840833,
0.08042507492528683,
0.08055517372220994,
0.0807026041914507,
0.08086736077147827,
0.08104943724716751,
0.08124882675003375,
0.08146552175849137,
0.08169951409813808,
0.08195079494206298,
0.08221935481117948,
0.0825051835745832,
0.08280827044993372,
0.0831286040038618,
0.08346617215240026,
0.08382096216143986,
0.08419296064721021,
0.08458215357678378,
0.08498852626860603,
0.0854120633930488,
0.08585274897298867,
0.08631056638440998,
0.08678549835703142,
0.08727752697495778,
0.08778663367735601,
0.08831279925915503,
0.08885600387177028,
0.0894162270238526,
0.08999344758206129,
0.09058764377186107,
0.0911987931783435,
0.09182687274707296,
0.09247185878495578,
0.09313372696113431,
0.09381245230790469,
0.0945080092216588,
0.09522037146384998,
0.09594951216198294,
0.0966954038106273,
0.09745801827245537,
0.09823732677930347,
0.09903329993325727,
0.09984590770776053,
0.10067511944874807,
0.10152090387580187,
0.10238322908333153,
0.10326206254177717,
0.10415737109883694,
0.10506912098071775,
0.10599727779340917,
0.10694180652398072,
0.10790267154190275,
0.1088798366003908,
0.1098732648377726,
0.11088291877887896,
0.11190876033645675,
0.11295075081260669,
0.11400885090024221,
0.11508302068457288,
0.11617321964460975,
0.117279406654694,
0.11840153998604852,
0.11953957730835196,
0.12069347569133515,
0.12186319160640124,
0.12304868092826732,
0.12424989893662913,
0.12546680031784768,
0.12669933916665926,
0.1279474689879066,
0.12921114269829292,
0.13049031262815836,
0.13178493052327767,
0.133094947546681,
0.13442031428049622,
0.13576098072781229,
0.13711689631456658,
0.1384880098914516,
0.13987426973584505,
0.1412756235537609,
0.14269201848182173,
0.14412340108925353,
0.14556971737990065,
0.147030912794263,
0.1485069322115543,
0.14999771995178118,
.15150321977784365,
0.15302337489765677,
0.1545581279662926,
0.15610742108814363,
0.15767119581910732,
0.15924939316878955,
0.16084195360273107,
0.16244881704465297,
0.16406992287872263,
0.16570520995184085,
0.16735461657594813,
0.16901808053035233,
0.17069553906407553,
0.17238692889822105,
0.17409218622836092,
0.17581124672694243,
0.17754404554571496,
0.1792905173181762,
0.1810505961620379,
0.18282421568171103,
0.18461130897081107,
0.1864118086146812,
0.18822564669293546,
0.19005275478202138,
0.19189306395780087,
0.1937465047981501,
0.19561300738557869,
0.19749250130986645,
0.19938491567072053,
0.20129017908044938,
0.20320821966665548,
0.20513896507494717,
0.2070823424716678,
0.20903827854664314,
0.21100669951594736,
0.21298753112468533,
0.21498069864979485,
0.21698612690286517,
0.21900374023297264,
0.22103346252953548,
0.22307521722518425,
0.22512892729865042,
0.22719451527767193,
0.22927190324191526,
0.23136101282591548,
0.2334617652220321,
0.2355740811834217,
0.23769788102702766,
0.23983308463658615,
0.24197961146564817,
0.244137380540618,
0.24630631046380774,
0.24848631941650795,
0.25067732516207447,
0.25287924504902964,
0.25509199601418137,
0.25731549458575576,
0.25954965688654613,
0.26179439863707715,
0.2640496351587844,
0.26631528137720756,
0.2685912518252014,
0.2708774606461587,
0.27317382159724896,
0.2754802480526726,
0.2777966530069282,
0.28012294907809426,
0.2824590485111265,
0.2848048631811671,
0.2871603045968698,
0.28952528390373833,
0.291899711887477,
0.2942834989773575,
0.2966765552495973,
0.29907879043075153,
0.30149011390111896,
0.3039104346981595,
0.30633966151992703,
0.308777702728512,
0.31122446635349965,
0.31367986009543863,
0.316143791329323,
0.3186161671080865,
0.3210968941661084,
0.3235858789227325,
0.32608302748579604,
0.3285882456551732,
0.33110143892632704,
0.3336225124938757,
0.33615137125516825,
0.33868791981387225,
0.34123206248357246,
0.3437837032913805,
0.3463427459815548,
0.34890909401913234,
0.35148265059356976,
0.3540633186223958,
0.3566510007548729,
0.35924559937567013,
0.36184701660854524,
0.36445515432003706,
0.36706991412316725,
0.3696911973811518,
0.3723189052111218,
0.37495293848785405,
0.37759319784750955,
0.3802395836913828,
0.38289199618965797,
0.3855503352851758,
0.38821450069720714,
0.39088439192523655,
0.39355990825275283,
0.3962409487510492,
0.3989274122830297,
0.40161919750702524,
0.40431620288061576,
0.4070183266644615,
0.4097254669261402,
0.4124375215439928,
0.4151543882109755,
0.4178759644385193,
0.42060214756039593,
0.4233328347365911,
0.4260679229571837,
0.42880730904623143,
0.4315508896656636,
0.4342985613191783,
0.4370502203561481,
0.4398057629755283,
0.4425650852297742,
0.4453280830287613,
0.44809465214371236,
0.45086468821112896,
0.4536380867367289,
0.4564147430993873,
0.459194552555084,
0.46197741024085415,
0.46476321117874464,
0.46755185027977353,
0.47034322234789483,
0.47313722208396636,
0.47593374408972267,
0.4787326828717501,
0.48153393284546697,
0.4843373883391063,
0.4871429435977021,
0.48995049278707875,
0.4927599299978436,
0.4955711492493818,
0.49838404449385454,
0.5011985096201994,
0.5040144384581333,
0.5068317247821571,
0.5096502623155635,
0.5124699447344456,
0.5152906656717079,
0.5181123187210785,
0.5209347974411241,
0.5237579953592637,
0.5265818059757865,
0.5294061227678686,
0.5322308391935918,
0.5350558486959621,
0.5378810447069303,
0.5407063206514109,
0.5435315699513036,
0.546356686029513,
0.5491815623139691,
0.552006092241648,
0.554830169262591,
0.5576536868439248,
0.5604765384738797,
0.5632986176658079,
0.5661198179622,
0.5689400329387018,
0.5717591562081277,
0.5745770814244753,
0.5773937022869359,
0.5802089125439055,
0.5830226059969922,
0.5858346765050229,
0.5886450179880464,
0.5914535244313364,
0.5942600898893892,
0.5970646084899217,
0.599866974437864,
0.6026670820193514,
0.6054648256057111,
0.6082600996574483,
0.6110527987282258,
0.6138428174688433,
0.6166300506312101,
0.6194143930723168,
0.6221957397582003,
0.6249739857679072,
0.6277490262974503,
0.6305207566637641,
0.6332890723086515,
0.6360538688027301,
0.6388150418493699,
0.6415724872886294,
0.6443261011011829,
0.6470757794122465,
0.6498214184954946,
0.6525629147769743,
0.6553001648390114,
0.658033065424113,
0.6607615134388609,
0.663485405957802,
0.6662046402273308,
0.6689191136695648,
0.6716287238862149,
0.6743333686624473,
0.6770329459707407,
0.6797273539747335,
0.6824164910330668,
0.6851002557032175,
0.6877785467453259,
0.6904512631260139,
0.6931183040221974,
0.6957795688248886,
0.6984349571429918,
0.7010843688070902,
0.7037277038732254,
0.7063648626266661,
0.7089957455856715,
0.711620253505242,
0.714238287380865,
0.7168497484522482,
0.7194545382070461,
0.7220525583845754,
0.7246437109795223,
0.7272278982456393,
0.7298050226994326,
0.7323749871238392,
0.7349376945718947,
0.73749304837039,
0.7400409521235184,
0.7425813097165119,
0.7451140253192664,
0.7476390033899577,
0.750156148678645,
0.7526653662308641,
0.7551665613912092,
0.7576596398069041,
0.7601445074313611,
0.762621070527729,
0.7650892356724281,
0.7675489097586764,
0.77,
0.7724424139337345,
0.7748760594245122,
0.777300844667738,
0.7797166781930528,
0.7821234688677838,
0.7845211259003827,
0.7869095588438493,
0.7892886775991451,
0.7916583924185916,
0.7940186139092555,
0.7963692530363208,
0.7987102211264479,
0.8010414298711186,
0.8033627913299675,
0.8056742179340981,
0.8079756224893881,
0.8102669181797777,
0.8125480185705443,
0.814818837611563,
0.8170792896405539,
0.819329289386312,
0.821568751971925,
0.8237975929179744,
0.8260157281457227,
0.8282230739802852,
0.8304195471537861,
0.8326050648084999,
0.834779544499977,
0.8369429042001537,
0.8390950623004467,
0.8412359376148313,
0.843365449382904,
0.8454835172729299,
0.8475900613848721,
0.8496850022534056,
0.851768260850916,
0.8538397585904798,
0.8558994173288297,
0.8579471593693011,
0.8599829074647646,
0.8620065848205392,
0.8640181150972893,
0.8660174224139043,
0.8680044313503614,
0.8699790669505705,
0.871941254725202,
0.8738909206544965,
0.8758279911910567,
0.8777523932626228,
0.8796640542748282,
0.8815629021139386,
0.8834488651495715,
0.8853218722373991,
0.8871818527218318,
0.8890287364386839,
0.8908624537178191,
0.8926829353857806,
0.8944901127683992,
0.8962839176933843,
0.8980642824928953,
0.899831140006095,
0.9015844235816821,
0.9033240670804066,
0.9050500048775632,
0.9067621718654688,
0.9084605034559169,
0.9101449355826152,
0.9118154047036018,
0.9134718478036421,
0.9151142023966066,
0.9167424065278273,
0.9183563987764352,
0.9199561182576772,
0.9215415046252131,
0.9231124980733918,
0.9246690393395072,
0.926211069706034,
0.9277385310028428,
0.9292513656093944,
0.930749516456913,
0.9322329270305398,
0.9337015413714644,
0.9351553040790356,
0.9365941603128515,
0.9380180557948283,
0.9394269368112481,
0.9408207502147845,
0.9421994434265077,
0.9435629644378685,
0.9449112618126594,
0.9462442846889552,
0.9475619827810324,
0.9488643063812647,
0.9501512063619997,
0.9514226341774108,
0.9526785418653294,
0.9539188820490536,
0.9551436079391358,
0.9563526733351477,
0.957546032627423,
0.9587236407987776,
0.9598854534262085,
0.961031426682569,
0.9621615173382226,
0.9632756827626728,
0.9643738809261722,
0.9654560704013075,
0.9665222103645625,
0.9675722605978575,
0.9686061814900675,
0.9696239340385155,
0.9706254798504443,
0.9716107811444648,
0.9725798007519808,
0.9735325021185914,
0.9744688493054703,
0.975388806990721,
0.9762923404707091,
0.9771794156613723,
0.9780499990995053,
0.9789040579440225,
0.9797415599771966,
0.9805624736058746,
0.9813667678626689,
0.9821544124071254,
0.9829253775268691,
0.9836796341387237,
0.9844171537898093,
0.9851379086586158,
0.985841871556052,
0.9865290159264719,
0.9871993158486756,
0.9878527460368882,
0.9884892818417125,
0.9891088992510597,
0.989711574891055,
0.990297286026919,
0.9908660105638256,
0.991417727047736,
0.9919524146662069,
0.9924700532491761,
0.9929706232697242,
0.9934541058448098,
0.9939204827359827,
0.9943697363500719,
0.9948018497398488,
0.995216806604667,
0.9956145912910772,
0.9959951887934169,
0.9963585847543777,
0.9967047654655458,
0.9970337178679196,
0.9973454295524029,
0.9976398887602718,
0.9979170843836189,
0.9981770059657726,
0.9984196437016915,
0.9986449884383333,
0.9988530316750013,
0.9990437655636648,
0.9992171829092547,
0.999373277169935,
0.99951204245735,
0.9996334735368465,
0.9997375658276703,
0.99982431540314,
0.9998937189907947,
0.9999457739725176,
0.9999804783846347,
0.9999978309179887,
0.9999978309179887,
0.9999804783846347,
0.9999457739725177,
0.9998937189907947,
0.99982431540314,
0.9997375658276703,
0.9996334735368465,
0.99951204245735,
0.999373277169935,
0.9992171829092547,
0.9990437655636648,
0.9988530316750013,
0.9986449884383333,
0.9984196437016915,
0.9981770059657726,
0.9979170843836189,
0.9976398887602718,
0.9973454295524029,
0.9970337178679197,
0.9967047654655458,
0.9963585847543777,
0.9959951887934169,
0.9956145912910772,
0.995216806604667,
0.9948018497398488,
0.9943697363500719,
0.9939204827359827,
0.9934541058448098,
0.9929706232697242,
0.9924700532491761,
0.9919524146662069,
0.991417727047736,
0.9908660105638256,
0.990297286026919,
0.989711574891055,
0.9891088992510597,
0.9884892818417125,
0.9878527460368882,
0.9871993158486757,
0.9865290159264719,
0.985841871556052,
0.9851379086586158,
0.9844171537898093,
0.9836796341387237,
0.9829253775268691,
0.9821544124071254,
0.9813667678626689,
0.9805624736058747,
0.9797415599771966,
0.9789040579440225,
0.9780499990995053,
0.9771794156613725,
0.9762923404707091,
0.975388806990721,
0.9744688493054703,
0.9735325021185914,
0.9725798007519808,
0.9716107811444648,
0.9706254798504443,
0.9696239340385155,
0.9686061814900675,
0.9675722605978575,
0.9665222103645625,
0.9654560704013077,
0.9643738809261722,
0.9632756827626728,
0.9621615173382226,
0.961031426682569,
0.9598854534262085,
0.9587236407987776,
0.957546032627423,
0.9563526733351477,
0.9551436079391358,
0.9539188820490536,
0.9526785418653294,
0.9514226341774108,
0.9501512063619997,
0.9488643063812647,
0.9475619827810324,
0.9462442846889554,
0.9449112618126594,
0.9435629644378685,
0.9421994434265077,
0.9408207502147845,
0.9394269368112481,
0.9380180557948283,
0.9365941603128515,
0.9351553040790356,
0.9337015413714644,
0.9322329270305398,
0.930749516456913,
0.9292513656093944,
0.9277385310028428,
0.926211069706034,
0.9246690393395072,
0.9231124980733918,
0.9215415046252133,
0.9199561182576772,
0.9183563987764352,
0.9167424065278273,
0.9151142023966068,
0.9134718478036421,
0.9118154047036018,
0.9101449355826152,
0.908460503455917,
0.9067621718654688,
0.9050500048775632,
0.9033240670804066,
0.9015844235816823,
0.899831140006095,
0.8980642824928953,
0.8962839176933843,
0.8944901127683993,
0.8926829353857806,
0.8908624537178191,
0.8890287364386839,
0.887181852721832,
0.8853218722373991,
0.8834488651495715,
0.8815629021139386,
0.8796640542748283,
0.8777523932626228,
0.8758279911910567,
0.8738909206544965,
0.8719412547252021,
0.8699790669505705,
0.8680044313503614,
0.8660174224139043,
0.8640181150972893,
0.8620065848205394,
0.8599829074647646,
0.8579471593693011,
0.8558994173288297,
0.85383975859048,
0.851768260850916,
0.8496850022534056,
0.8475900613848721,
0.84548351727293,
0.843365449382904,
0.8412359376148313,
0.8390950623004466,
0.8369429042001537,
0.834779544499977,
0.8326050648084999,
0.8304195471537861,
0.8282230739802853,
0.8260157281457228,
0.8237975929179745,
0.8215687519719248,
0.819329289386312,
0.8170792896405539,
0.814818837611563,
0.8125480185705443,
0.8102669181797778,
0.8079756224893884,
0.8056742179340981,
0.8033627913299672,
0.8010414298711186,
0.7987102211264479,
0.7963692530363208,
0.7940186139092555,
0.7916583924185918,
0.7892886775991453,
0.7869095588438494,
0.7845211259003825,
0.7821234688677838,
0.7797166781930528,
0.777300844667738,
0.7748760594245122,
0.7724424139337346,
0.7700000000000002,
0.7675489097586765,
0.7650892356724283,
0.7626210705277288,
0.7601445074313611,
0.7576596398069041,
0.7551665613912092,
0.7526653662308641,
0.7501561486786451,
0.7476390033899578,
0.7451140253192665,
0.7425813097165117,
0.7400409521235184,
0.73749304837039,
0.7349376945718947,
0.7323749871238392,
0.7298050226994326,
0.7272278982456395,
0.7246437109795225,
0.7220525583845753,
0.7194545382070461,
0.7168497484522482,
0.714238287380865,
0.711620253505242,
0.7089957455856716,
0.7063648626266663,
0.7037277038732256,
0.7010843688070901,
0.6984349571429916,
0.6957795688248886,
0.6931183040221974,
0.690451263126014,
0.687778546745326,
0.6851002557032178,
0.682416491033067,
0.6797273539747334,
0.6770329459707405,
0.6743333686624473,
0.6716287238862149,
0.6689191136695649,
0.666204640227331,
0.6634854059578023,
0.6607615134388611,
0.6580330654241128,
0.6553001648390113,
0.6525629147769741,
0.6498214184954946,
0.6470757794122465,
0.644326101101183,
0.6415724872886295,
0.6388150418493701,
0.6360538688027302,
0.6332890723086514,
0.630520756663764,
0.6277490262974503,
0.6249739857679072,
0.6221957397582004,
0.6194143930723169,
0.6166300506312103,
0.6138428174688435,
0.6110527987282257,
0.6082600996574482,
0.6054648256057111,
0.6026670820193514,
0.5998669744378641,
0.5970646084899218,
0.5942600898893894,
0.5914535244313366,
0.5886450179880462,
0.5858346765050227,
0.5830226059969922,
0.5802089125439055,
0.577393702286936,
0.5745770814244753,
0.5717591562081279,
0.568940032938702,
0.5661198179621999,
0.5632986176658078,
0.5604765384738797,
0.5576536868439248,
0.5548301692625911,
0.5520060922416481,
0.5491815623139693,
0.5463566860295131,
0.5435315699513035,
0.5407063206514108,
0.5378810447069302,
0.5350558486959621,
0.5322308391935918,
0.5294061227678687,
0.5265818059757866,
0.5237579953592639,
0.5209347974411244,
0.5181123187210784,
0.5152906656717078,
0.5124699447344456,
0.5096502623155635,
0.5068317247821572,
0.5040144384581333,
0.5011985096201996,
0.49838404449385476,
0.49557114924938167,
0.4927599299978435,
0.48995049278707875,
0.4871429435977021,
0.48433738833910633,
0.4815339328454671,
0.4787326828717503,
0.4759337440897229,
0.47313722208396625,
0.4703432223478947,
0.46755185027977353,
0.46476321117874464,
0.46197741024085426,
0.4591945525550841,
0.45641474309938745,
0.4536380867367291,
0.45086468821112885,
0.44809465214371225,
0.4453280830287613,
0.4425650852297742,
0.4398057629755284,
0.43705022035614816,
0.43429856131917854,
0.43155088966566374,
0.4288073090462313,
0.4260679229571836,
0.4233328347365911,
0.42060214756039593,
0.4178759644385193,
0.4151543882109756,
0.41243752154399294,
0.4097254669261404,
0.4070183266644617,
0.40431620288061565,
0.4016191975070251,
0.3989274122830297,
0.3962409487510492,
0.3935599082527529,
0.3908843919252366,
0.3882145006972073,
0.385550335285176,
0.38289199618965786,
0.38023958369138267,
0.37759319784750955,
0.37495293848785405,
0.3723189052111219,
0.36969119738115186,
0.3670699141231674,
0.3644551543200373,
0.3618470166085451,
0.35924559937567,
0.3566510007548729,
0.3540633186223958,
0.35148265059356987,
0.3489090940191324,
0.34634274598155496,
0.3437837032913807,
0.34123206248357246,
0.33868791981387225,
0.33615137125516825,
0.3336225124938757,
0.33110143892632704,
0.3285882456551732,
0.3260830274857962,
0.3235858789227327,
0.3210968941661084,
0.3186161671080865,
0.316143791329323,
0.31367986009543863,
0.31122446635349965,
0.308777702728512,
0.30633966151992703,
0.3039104346981597,
0.30149011390111913,
0.29907879043075153,
0.2966765552495973,
0.2942834989773575,
0.291899711887477,
0.28952528390373833,
0.28716030459687,
0.2848048631811672,
0.28245904851112674,
0.28012294907809426,
0.2777966530069282,
0.2754802480526726,
0.27317382159724896,
0.2708774606461587,
0.2685912518252015,
0.2663152813772077,
0.26404963515878455,
0.26179439863707715,
0.25954965688654613,
0.25731549458575576,
0.25509199601418137,
0.25287924504902964,
0.25067732516207447,
0.24848631941650812,
0.24630631046380785,
0.2441373805406179,
0.24197961146564817,
0.23983308463658615,
0.23769788102702766,
0.2355740811834217,
0.2334617652220321,
0.2313610128259156,
0.22927190324191543,
0.22719451527767176,
0.22512892729865042,
0.22307521722518425,
0.22103346252953548,
0.21900374023297264,
0.21698612690286517,
0.21498069864979502,
0.21298753112468538,
0.21100669951594753,
0.20903827854664314,
0.2070823424716678,
0.20513896507494717,
0.20320821966665548,
0.20129017908044938,
0.19938491567072064,
0.19749250130986656,
0.1956130073855788,
0.1937465047981501,
0.19189306395780087,
0.19005275478202138,
0.18822564669293546,
0.1864118086146812,
0.18461130897081118,
0.1828242156817112,
0.181050596162038,
0.1792905173181762,
0.17754404554571496,
0.17581124672694243,
0.17409218622836092,
0.17238692889822105,
0.17069553906407553,
0.16901808053035244,
0.16735461657594825,
0.16570520995184074,
0.16406992287872263,
0.16244881704465297,
0.16084195360273107,
0.15924939316878955,
0.15767119581910732,
0.15610742108814374,
0.15455812796629265,
0.15302337489765666,
0.15150321977784365,
0.14999771995178118,
0.1485069322115543,
0.147030912794263,
0.14556971737990065,
0.1441234010892536,
0.14269201848182184,
0.14127562355376078,
0.13987426973584505,
0.1384880098914516,
0.13711689631456658,
0.13576098072781229,
0.13442031428049622,
0.1330949475466811,
0.13178493052327778,
0.13049031262815847,
0.12921114269829292,
0.1279474689879066,
0.12669933916665926,
0.12546680031784768,
0.12424989893662913,
0.12304868092826743,
0.1218631916064013,
0.1206934756913352,
0.11953957730835185,
0.11840153998604852,
0.117279406654694,
0.11617321964460975,
0.11508302068457288,
0.11400885090024232,
0.11295075081260675,
0.11190876033645686,
0.1108829187788789,
0.1098732648377726,
0.1088798366003908,
0.10790267154190275,
0.10694180652398072,
0.10599727779340923,
0.10506912098071786,
0.10415737109883699,
0.10326206254177711,
0.10238322908333153,
0.10152090387580187,
0.10067511944874807,
0.09984590770776053,
0.09903329993325727,
0.09823732677930352,
0.09745801827245543,
0.09669540381062725,
0.09594951216198294,
0.09522037146384998,
0.0945080092216588,
0.09381245230790469,
0.09313372696113431,
0.09247185878495584,
0.09182687274707302,
0.09119879317834356,
0.09058764377186107,
0.08999344758206129,
0.0894162270238526,
0.08885600387177028,
0.08831279925915503,
0.08778663367735606,
0.08727752697495783,
0.08678549835703142,
0.08631056638440998,
0.08585274897298867,
0.0854120633930488,
0.08498852626860603,
0.08458215357678378,
0.08419296064721021,
0.08382096216143992,
0.08346617215240026,
0.0831286040038618,
0.08280827044993372,
0.0825051835745832,
0.08221935481117948,
0.08195079494206298,
0.08169951409813808,
0.08146552175849137,
0.08124882675003375,
0.08104943724716751,
0.08086736077147827,
0.0807026041914507,
0.08055517372220994,
0.08042507492528683,
0.08031231270840833,
0.08021689132531201,
0.08013881437558612,
0.08007808480453332,
0.08003470490305992,
0.08000867630758934,
0.0800000000000000
};


//
//signal.windows.hamming(512)
const float hamming_window_512[] = {
       0.08      , 0.08003477, 0.08013909, 0.08031292, 0.08055626,
       0.08086906, 0.08125127, 0.08170284, 0.0822237 , 0.08281376,
       0.08347295, 0.08420116, 0.08499828, 0.08586418, 0.08679875,
       0.08780184, 0.08887329, 0.09001294, 0.09122063, 0.09249617,
       0.09383936, 0.09525001, 0.09672789, 0.0982728 , 0.09988448,
       0.10156271, 0.10330722, 0.10511775, 0.10699403, 0.10893578,
       0.1109427 , 0.11301448, 0.11515082, 0.11735139, 0.11961586,
       0.12194389, 0.12433512, 0.12678919, 0.12930573, 0.13188437,
       0.13452471, 0.13722635, 0.13998888, 0.14281189, 0.14569495,
       0.14863762, 0.15163946, 0.15470002, 0.15781883, 0.16099542,
       0.16422931, 0.16752001, 0.17086702, 0.17426984, 0.17772796,
       0.18124085, 0.18480797, 0.1884288 , 0.19210278, 0.19582935,
       0.19960796, 0.20343803, 0.20731899, 0.21125024, 0.2152312 ,
       0.21926125, 0.2233398 , 0.22746622, 0.2316399 , 0.23586019,
       0.24012646, 0.24443807, 0.24879437, 0.25319469, 0.25763837,
       0.26212475, 0.26665313, 0.27122284, 0.27583319, 0.28048347,
       0.28517299, 0.28990103, 0.29466689, 0.29946984, 0.30430915,
       0.3091841 , 0.31409394, 0.31903793, 0.32401534, 0.32902539,
       0.33406735, 0.33914043, 0.34424389, 0.34937694, 0.35453881,
       0.35972872, 0.36494588, 0.37018951, 0.37545881, 0.38075299,
       0.38607124, 0.39141277, 0.39677676, 0.4021624 , 0.40756889,
       0.41299539, 0.4184411 , 0.42390518, 0.42938682, 0.43488518,
       0.44039943, 0.44592874, 0.45147227, 0.45702919, 0.46259865,
       0.46817981, 0.47377183, 0.47937386, 0.48498506, 0.49060458,
       0.49623157, 0.50186517, 0.50750453, 0.51314881, 0.51879715,
       0.5244487 , 0.5301026 , 0.53575799, 0.54141402, 0.54706984,
       0.55272459, 0.55837742, 0.56402747, 0.56967389, 0.57531582,
       0.58095241, 0.58658281, 0.59220616, 0.59782163, 0.60342835,
       0.60902548, 0.61461218, 0.6201876 , 0.62575089, 0.63130122,
       0.63683774, 0.64235963, 0.64786604, 0.65335614, 0.6588291 ,
       0.6642841 , 0.66972031, 0.67513691, 0.68053307, 0.68590799,
       0.69126085, 0.69659084, 0.70189716, 0.707179  , 0.71243557,
       0.71766606, 0.72286969, 0.72804568, 0.73319324, 0.73831159,
       0.74339995, 0.74845757, 0.75348367, 0.75847749, 0.76343829,
       0.7683653 , 0.77325778, 0.77811501, 0.78293623, 0.78772072,
       0.79246776, 0.79717663, 0.80184662, 0.80647702, 0.81106714,
       0.81561627, 0.82012373, 0.82458885, 0.82901093, 0.83338932,
       0.83772336, 0.84201238, 0.84625575, 0.85045281, 0.85460293,
       0.8587055 , 0.86275987, 0.86676546, 0.87072163, 0.87462781,
       0.8784834 , 0.88228781, 0.88604048, 0.88974082, 0.89338829,
       0.89698234, 0.90052241, 0.90400798, 0.90743851, 0.91081349,
       0.91413241, 0.91739477, 0.92060007, 0.92374783, 0.92683757,
       0.92986882, 0.93284114, 0.93575406, 0.93860715, 0.94139997,
       0.94413211, 0.94680315, 0.94941269, 0.95196032, 0.95444568,
       0.95686838, 0.95922805, 0.96152434, 0.9637569 , 0.9659254 ,
       0.9680295 , 0.97006889, 0.97204326, 0.97395231, 0.97579575,
       0.97757331, 0.97928471, 0.98092969, 0.98250802, 0.98401944,
       0.98546374, 0.98684068, 0.98815007, 0.98939171, 0.9905654 ,
       0.99167097, 0.99270826, 0.99367711, 0.99457736, 0.99540889,
       0.99617157, 0.99686528, 0.99748992, 0.99804539, 0.99853161,
       0.99894851, 0.99929602, 0.99957409, 0.99978268, 0.99992176,
       0.99999131, 0.99999131, 0.99992176, 0.99978268, 0.99957409,
       0.99929602, 0.99894851, 0.99853161, 0.99804539, 0.99748992,
       0.99686528, 0.99617157, 0.99540889, 0.99457736, 0.99367711,
       0.99270826, 0.99167097, 0.9905654 , 0.98939171, 0.98815007,
       0.98684068, 0.98546374, 0.98401944, 0.98250802, 0.98092969,
       0.97928471, 0.97757331, 0.97579575, 0.97395231, 0.97204326,
       0.97006889, 0.9680295 , 0.9659254 , 0.9637569 , 0.96152434,
       0.95922805, 0.95686838, 0.95444568, 0.95196032, 0.94941269,
       0.94680315, 0.94413211, 0.94139997, 0.93860715, 0.93575406,
       0.93284114, 0.92986882, 0.92683757, 0.92374783, 0.92060007,
       0.91739477, 0.91413241, 0.91081349, 0.90743851, 0.90400798,
       0.90052241, 0.89698234, 0.89338829, 0.88974082, 0.88604048,
       0.88228781, 0.8784834 , 0.87462781, 0.87072163, 0.86676546,
       0.86275987, 0.8587055 , 0.85460293, 0.85045281, 0.84625575,
       0.84201238, 0.83772336, 0.83338932, 0.82901093, 0.82458885,
       0.82012373, 0.81561627, 0.81106714, 0.80647702, 0.80184662,
       0.79717663, 0.79246776, 0.78772072, 0.78293623, 0.77811501,
       0.77325778, 0.7683653 , 0.76343829, 0.75847749, 0.75348367,
       0.74845757, 0.74339995, 0.73831159, 0.73319324, 0.72804568,
       0.72286969, 0.71766606, 0.71243557, 0.707179  , 0.70189716,
       0.69659084, 0.69126085, 0.68590799, 0.68053307, 0.67513691,
       0.66972031, 0.6642841 , 0.6588291 , 0.65335614, 0.64786604,
       0.64235963, 0.63683774, 0.63130122, 0.62575089, 0.6201876 ,
       0.61461218, 0.60902548, 0.60342835, 0.59782163, 0.59220616,
       0.58658281, 0.58095241, 0.57531582, 0.56967389, 0.56402747,
       0.55837742, 0.55272459, 0.54706984, 0.54141402, 0.53575799,
       0.5301026 , 0.5244487 , 0.51879715, 0.51314881, 0.50750453,
       0.50186517, 0.49623157, 0.49060458, 0.48498506, 0.47937386,
       0.47377183, 0.46817981, 0.46259865, 0.45702919, 0.45147227,
       0.44592874, 0.44039943, 0.43488518, 0.42938682, 0.42390518,
       0.4184411 , 0.41299539, 0.40756889, 0.4021624 , 0.39677676,
       0.39141277, 0.38607124, 0.38075299, 0.37545881, 0.37018951,
       0.36494588, 0.35972872, 0.35453881, 0.34937694, 0.34424389,
       0.33914043, 0.33406735, 0.32902539, 0.32401534, 0.31903793,
       0.31409394, 0.3091841 , 0.30430915, 0.29946984, 0.29466689,
       0.28990103, 0.28517299, 0.28048347, 0.27583319, 0.27122284,
       0.26665313, 0.26212475, 0.25763837, 0.25319469, 0.24879437,
       0.24443807, 0.24012646, 0.23586019, 0.2316399 , 0.22746622,
       0.2233398 , 0.21926125, 0.2152312 , 0.21125024, 0.20731899,
       0.20343803, 0.19960796, 0.19582935, 0.19210278, 0.1884288 ,
       0.18480797, 0.18124085, 0.17772796, 0.17426984, 0.17086702,
       0.16752001, 0.16422931, 0.16099542, 0.15781883, 0.15470002,
       0.15163946, 0.14863762, 0.14569495, 0.14281189, 0.13998888,
       0.13722635, 0.13452471, 0.13188437, 0.12930573, 0.12678919,
       0.12433512, 0.12194389, 0.11961586, 0.11735139, 0.11515082,
       0.11301448, 0.1109427 , 0.10893578, 0.10699403, 0.10511775,
       0.10330722, 0.10156271, 0.09988448, 0.0982728 , 0.09672789,
       0.09525001, 0.09383936, 0.09249617, 0.09122063, 0.09001294,
       0.08887329, 0.08780184, 0.08679875, 0.08586418, 0.08499828,
       0.08420116, 0.08347295, 0.08281376, 0.0822237 , 0.08170284,
       0.08125127, 0.08086906, 0.08055626, 0.08031292, 0.08013909,
       0.08003477, 0.08 };

const float * pffft_window(int audioBlockSize){
   if(audioBlockSize==512){
      return hamming_window_512;
   }else if(audioBlockSize==1024){
      return hamming_window_1024;
   }
   fprintf(stderr, "Window of size %d not supported.\n",audioBlockSize);
   return NULL;
}

