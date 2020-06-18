/*
<Lenet Neural Network High Level Synthesis Lenet>

MIT License

Copyright (c) 2020 Filipe Maciel Lins

Permission is hereby granted, free of charge, to any person obtaining a copy of this software
and associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions: The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef WEIGHTS_FC3_H
#define WEIGHTS_FC3_H
#include "ap_fixed.h" 
#include "defines.h" 
float fc3_layer_bias[10] = { -0.00672498904168605804443,  0.05649947002530097961426,  -0.00235132803209125995636,  -0.01063998136669397354126,  0.01037990767508745193481,  0.03594503179192543029785,  -0.03101638890802860260010,  0.03494932129979133605957,  -0.06181969121098518371582,  -0.02522122301161289215088};
float fc3_layer_weights[84][10] = { 0.13499733805656433105469,  -0.02175127714872360229492,  -0.18721269071102142333984,  -0.11750914901494979858398,  -0.22124001383781433105469,  -0.04578056558966636657715,  -0.29894691705703735351562,  0.05713087320327758789062,  -0.30752339959144592285156,  0.19141188263893127441406,
 0.18225497007369995117188,  0.13811968266963958740234,  0.06864640861749649047852,  -0.00064367346931248903275,  0.22484220564365386962891,  0.15586458146572113037109,  -0.10755653679370880126953,  0.16943502426147460937500,  0.23939481377601623535156,  -0.09559987485408782958984,
 -0.27841466665267944335938,  0.18606016039848327636719,  -0.25426924228668212890625,  -0.15372617542743682861328,  -0.22241312265396118164062,  0.29175439476966857910156,  0.17925536632537841796875,  0.12579256296157836914062,  0.01989303529262542724609,  -0.13384744524955749511719,
 -0.16555146872997283935547,  0.22292925417423248291016,  -0.11267146468162536621094,  0.10009664297103881835938,  -0.13520087301731109619141,  0.06936650723218917846680,  0.00983555987477302551270,  0.23197704553604125976562,  0.17143283784389495849609,  0.20336696505546569824219,
 -0.28503051400184631347656,  -0.06985082477331161499023,  0.15151599049568176269531,  -0.18519043922424316406250,  0.18787249922752380371094,  0.23349426686763763427734,  -0.17467872798442840576172,  -0.24416956305503845214844,  0.06888471543788909912109,  -0.16943892836570739746094,
 0.16374887526035308837891,  -0.08298087865114212036133,  0.02543561905622482299805,  0.14740104973316192626953,  0.09117110818624496459961,  -0.08260322362184524536133,  0.08768947422504425048828,  -0.27071851491928100585938,  0.16192786395549774169922,  -0.02781384624540805816650,
 -0.07306716591119766235352,  -0.23141245543956756591797,  -0.08806981891393661499023,  -0.11098013073205947875977,  -0.19197227060794830322266,  0.12201971560716629028320,  0.02773355878889560699463,  0.03425908461213111877441,  0.14742745459079742431641,  0.21404038369655609130859,
 -0.07611376047134399414062,  0.15393286943435668945312,  0.16487586498260498046875,  -0.12429760396480560302734,  -0.01827718317508697509766,  0.10815549641847610473633,  0.25220221281051635742188,  0.14022062718868255615234,  -0.30760344862937927246094,  0.05467176064848899841309,
 0.24888329207897186279297,  0.03580409660935401916504,  -0.23206587135791778564453,  -0.00024070312792900949717,  0.03120791353285312652588,  -0.06122702360153198242188,  0.24151051044464111328125,  -0.17647860944271087646484,  -0.20174370706081390380859,  -0.16889473795890808105469,
 -0.15209855139255523681641,  -0.02277152985334396362305,  -0.00817200820893049240112,  0.13023369014263153076172,  -0.23885385692119598388672,  0.08894598484039306640625,  -0.07711914926767349243164,  -0.07257036864757537841797,  0.13154205679893493652344,  0.09166215360164642333984,
 0.12071533501148223876953,  0.15905690193176269531250,  0.17905955016613006591797,  -0.09476777166128158569336,  0.16282580792903900146484,  -0.05992895364761352539062,  0.00787833798676729202271,  -0.21255198121070861816406,  0.19708785414695739746094,  0.12579691410064697265625,
 -0.22973620891571044921875,  -0.12527024745941162109375,  0.05453931167721748352051,  0.19296838343143463134766,  -0.03114862926304340362549,  -0.12410995364189147949219,  -0.17493776977062225341797,  0.26481977105140686035156,  0.06109685450792312622070,  0.25378212332725524902344,
 -0.09600797295570373535156,  -0.28062117099761962890625,  0.28129360079765319824219,  0.29402470588684082031250,  -0.05537491291761398315430,  0.23230850696563720703125,  -0.08684692531824111938477,  -0.21041038632392883300781,  0.04865877702832221984863,  -0.06475108861923217773438,
 0.28360739350318908691406,  -0.03053316846489906311035,  0.09110338240861892700195,  0.34521022439002990722656,  0.24032257497310638427734,  0.22797659039497375488281,  -0.00618762662634253501892,  0.02765996381640434265137,  -0.28044030070304870605469,  0.12136130779981613159180,
 -0.00793144013732671737671,  -0.04027945548295974731445,  0.18066072463989257812500,  0.14758367836475372314453,  -0.19330319762229919433594,  0.09563004225492477416992,  -0.04813797771930694580078,  -0.14706256985664367675781,  -0.23054529726505279541016,  0.08594079315662384033203,
 -0.13382121920585632324219,  -0.03700702264904975891113,  -0.00516729475930333137512,  0.13873957097530364990234,  0.10229811072349548339844,  0.08377777040004730224609,  -0.27272453904151916503906,  0.05394233018159866333008,  0.13621556758880615234375,  0.09623712301254272460938,
 0.07736836373805999755859,  0.33615738153457641601562,  0.32184207439422607421875,  -0.02323120646178722381592,  -0.09657222777605056762695,  -0.25071656703948974609375,  0.24637848138809204101562,  0.16204129159450531005859,  -0.17879727482795715332031,  -0.31569370627403259277344,
 0.14633141458034515380859,  0.12726566195487976074219,  0.03416837006807327270508,  0.21843443810939788818359,  -0.23123888671398162841797,  -0.24668908119201660156250,  -0.24062049388885498046875,  0.13863131403923034667969,  -0.18160448968410491943359,  -0.02734929323196411132812,
 0.17301365733146667480469,  -0.14184942841529846191406,  -0.05358579382300376892090,  -0.22564445436000823974609,  -0.04872534424066543579102,  0.09172070026397705078125,  0.09209981560707092285156,  -0.15505389869213104248047,  -0.12243086844682693481445,  -0.25193586945533752441406,
 0.06639863550662994384766,  -0.20726309716701507568359,  -0.12611040472984313964844,  0.02894247509539127349854,  0.24193027615547180175781,  -0.13901671767234802246094,  0.31865143775939941406250,  -0.06843318045139312744141,  0.17958296835422515869141,  -0.15518327057361602783203,
 -0.22833313047885894775391,  0.24885533750057220458984,  -0.24787685275077819824219,  0.16462880373001098632812,  -0.00113861181307584047318,  0.21834957599639892578125,  -0.02876441925764083862305,  0.00530954776331782341003,  0.00823785923421382904053,  0.17380295693874359130859,
 -0.15311890840530395507812,  -0.14622391760349273681641,  0.23579043149948120117188,  -0.11663477122783660888672,  0.16043153405189514160156,  0.03003320470452308654785,  -0.14875972270965576171875,  0.10097109526395797729492,  0.21293668448925018310547,  -0.16697615385055541992188,
 -0.20158107578754425048828,  0.16062079370021820068359,  -0.23232175409793853759766,  0.11630050092935562133789,  0.06602567434310913085938,  0.04760148376226425170898,  0.22861824929714202880859,  -0.05565720424056053161621,  -0.05202764272689819335938,  0.10854022204875946044922,
 0.15328119695186614990234,  -0.17528387904167175292969,  0.26112699508666992187500,  -0.25703021883964538574219,  -0.09779205918312072753906,  -0.23498792946338653564453,  -0.09182144701480865478516,  -0.14711560308933258056641,  0.05363533645868301391602,  -0.21347317099571228027344,
 -0.08895306289196014404297,  -0.13118882477283477783203,  -0.15451028943061828613281,  -0.15430510044097900390625,  0.17529265582561492919922,  0.19550655782222747802734,  -0.10569340735673904418945,  -0.14705634117126464843750,  0.05002892017364501953125,  -0.04891147464513778686523,
 0.16855058073997497558594,  -0.07579906284809112548828,  0.17067354917526245117188,  0.14312006533145904541016,  0.17755243182182312011719,  0.15940698981285095214844,  -0.11185905337333679199219,  0.04096463695168495178223,  0.07594288140535354614258,  0.25695982575416564941406,
 0.06842811405658721923828,  -0.12090755254030227661133,  0.17344479262828826904297,  0.14747363328933715820312,  -0.15923431515693664550781,  0.08091191947460174560547,  -0.26270383596420288085938,  0.19950486719608306884766,  0.04435897618532180786133,  0.25006544589996337890625,
 -0.14842192828655242919922,  -0.18220070004463195800781,  0.04731727018952369689941,  -0.23708325624465942382812,  -0.11225289106369018554688,  -0.05708640441298484802246,  -0.15730063617229461669922,  -0.15224234759807586669922,  0.05112133175134658813477,  -0.21493896842002868652344,
 0.18095268309116363525391,  0.02291194349527359008789,  -0.26219442486763000488281,  0.14968843758106231689453,  -0.19861219823360443115234,  -0.00155960023403167724609,  0.01508084498345851898193,  0.20681652426719665527344,  0.17710234224796295166016,  -0.01423629466444253921509,
 -0.08071079105138778686523,  -0.04195940122008323669434,  0.22793349623680114746094,  0.08626071363687515258789,  -0.00087610021000728011131,  -0.23071914911270141601562,  0.16943877935409545898438,  0.23730836808681488037109,  -0.08889650553464889526367,  0.13936491310596466064453,
 -0.08235941082239151000977,  0.02029224857687950134277,  -0.17655886709690093994141,  -0.16830153763294219970703,  0.23725487291812896728516,  -0.11649019271135330200195,  0.05060267448425292968750,  0.33520606160163879394531,  -0.02811531908810138702393,  -0.24707506597042083740234,
 0.29940551519393920898438,  -0.11877354234457015991211,  0.08946693688631057739258,  0.08650454133749008178711,  0.00257348828017711639404,  0.06525292992591857910156,  0.27599665522575378417969,  -0.02649644762277603149414,  0.07100544869899749755859,  0.11689750850200653076172,
 -0.07122477889060974121094,  -0.26453766226768493652344,  -0.33979505300521850585938,  0.07809337973594665527344,  -0.05132472887635231018066,  -0.06695636361837387084961,  0.21401110291481018066406,  -0.15226255357265472412109,  0.15718558430671691894531,  0.12434947490692138671875,
 -0.04591808840632438659668,  0.28859359025955200195312,  0.00300349900498986244202,  -0.33669486641883850097656,  0.33597710728645324707031,  0.14594133198261260986328,  0.06801896542310714721680,  0.10217880457639694213867,  -0.06018796563148498535156,  -0.03941743448376655578613,
 0.21135814487934112548828,  -0.17207425832748413085938,  -0.17191804945468902587891,  0.02251359447836875915527,  0.10498689115047454833984,  0.05110357701778411865234,  -0.23346348106861114501953,  -0.03545152395963668823242,  0.19066709280014038085938,  -0.21893274784088134765625,
 0.29788804054260253906250,  0.02648821473121643066406,  0.13780708611011505126953,  -0.25111901760101318359375,  -0.11910045146942138671875,  -0.22311930358409881591797,  -0.19222638010978698730469,  0.23495881259441375732422,  -0.22094352543354034423828,  0.23766392469406127929688,
 -0.01596799120306968688965,  -0.17561005055904388427734,  -0.00104236404877156019211,  0.05747711658477783203125,  -0.26827651262283325195312,  -0.07279465347528457641602,  -0.25550916790962219238281,  0.08186913281679153442383,  -0.13615165650844573974609,  0.02410572767257690429688,
 -0.03130302950739860534668,  0.23385128378868103027344,  0.20561058819293975830078,  -0.05513453856110572814941,  -0.13269416987895965576172,  -0.06585837155580520629883,  0.06177233904600143432617,  -0.15535780787467956542969,  0.17487235367298126220703,  -0.12802736461162567138672,
 -0.19386726617813110351562,  -0.31101730465888977050781,  0.07400950789451599121094,  -0.09486328810453414916992,  -0.20617373287677764892578,  -0.29138869047164916992188,  -0.04191725328564643859863,  0.06785847246646881103516,  0.19855011999607086181641,  0.28032875061035156250000,
 0.11442034691572189331055,  0.20479780435562133789062,  0.24590663611888885498047,  0.22930330038070678710938,  0.00077714514918625354767,  -0.28548708558082580566406,  -0.05434057489037513732910,  0.02197322435677051544189,  0.05759701505303382873535,  -0.33484312891960144042969,
 0.21281218528747558593750,  0.16853030025959014892578,  -0.02263091318309307098389,  0.07366100698709487915039,  -0.00328655913472175598145,  -0.12654465436935424804688,  -0.17889469861984252929688,  0.00303959916345775127411,  -0.14850498735904693603516,  -0.06312278658151626586914,
 0.10773299634456634521484,  -0.09497214108705520629883,  -0.03295542299747467041016,  0.29737126827239990234375,  0.15371793508529663085938,  0.25187337398529052734375,  0.18777592480182647705078,  -0.23524472117424011230469,  0.21236008405685424804688,  0.12187003344297409057617,
 0.19998843967914581298828,  0.19191980361938476562500,  -0.04882410913705825805664,  -0.08679465204477310180664,  0.23584564030170440673828,  -0.12662190198898315429688,  -0.03788635879755020141602,  0.11696010828018188476562,  0.07638041675090789794922,  0.01764244772493839263916,
 -0.04634429514408111572266,  0.28938814997673034667969,  0.08690324425697326660156,  -0.18393929302692413330078,  0.22546689212322235107422,  0.05569512397050857543945,  -0.19904905557632446289062,  -0.12220271676778793334961,  -0.29333999752998352050781,  0.29335901141166687011719,
 0.13432165980339050292969,  0.23127317428588867187500,  0.24396243691444396972656,  -0.09389889985322952270508,  0.10614359378814697265625,  -0.30069088935852050781250,  0.10544587671756744384766,  0.02379494346678256988525,  0.07807191461324691772461,  0.16581158339977264404297,
 -0.15248452126979827880859,  0.12135231494903564453125,  0.09205780923366546630859,  -0.10284133255481719970703,  0.10285054147243499755859,  -0.10502550005912780761719,  -0.15825621783733367919922,  -0.12574382126331329345703,  0.24012599885463714599609,  0.25167512893676757812500,
 -0.03835548833012580871582,  -0.18319591879844665527344,  -0.03651149943470954895020,  0.15654566884040832519531,  0.23392531275749206542969,  0.31295222043991088867188,  0.27897539734840393066406,  -0.27956503629684448242188,  -0.28244644403457641601562,  0.15102732181549072265625,
 -0.21960645914077758789062,  0.05004245415329933166504,  -0.24741832911968231201172,  0.03741790354251861572266,  -0.07696265727281570434570,  -0.20363152027130126953125,  -0.22479772567749023437500,  -0.17370542883872985839844,  0.12874701619148254394531,  0.20879794657230377197266,
 -0.06095093116164207458496,  0.02264421060681343078613,  -0.03905767574906349182129,  -0.19506049156188964843750,  0.10825484991073608398438,  0.06433195620775222778320,  0.17017778754234313964844,  -0.16182735562324523925781,  0.32554042339324951171875,  -0.07374592870473861694336,
 0.21159726381301879882812,  -0.12660415470600128173828,  0.17621675133705139160156,  0.10331636667251586914062,  0.05428299307823181152344,  0.08055636286735534667969,  -0.22503711283206939697266,  0.23159572482109069824219,  0.05365714430809020996094,  -0.07867640256881713867188,
 0.17644204199314117431641,  -0.22190491855144500732422,  -0.03554061800241470336914,  0.08657056093215942382812,  -0.11601989716291427612305,  -0.10219927877187728881836,  -0.12622039020061492919922,  -0.17749385535717010498047,  0.19552052021026611328125,  0.15189942717552185058594,
 -0.04436643794178962707520,  0.21494248509407043457031,  0.08105016499757766723633,  0.24845655262470245361328,  -0.00348245794884860515594,  0.09475567191839218139648,  -0.00702106952667236328125,  -0.18079684674739837646484,  0.05375709012150764465332,  0.10830745100975036621094,
 0.22638572752475738525391,  0.13151887059211730957031,  0.26362571120262145996094,  0.09244594722986221313477,  -0.02390975691378116607666,  0.04282767698168754577637,  -0.02776397019624710083008,  -0.03170308470726013183594,  0.18541964888572692871094,  -0.24405696988105773925781,
 -0.12518131732940673828125,  0.05194791033864021301270,  0.05618766695261001586914,  0.10059988498687744140625,  -0.19783687591552734375000,  0.16974470019340515136719,  0.20874860882759094238281,  -0.19346542656421661376953,  -0.10157654434442520141602,  0.10857898741960525512695,
 0.00229506287723779678345,  0.07153011113405227661133,  0.10041765123605728149414,  -0.07758130133152008056641,  -0.19468136131763458251953,  -0.15726377069950103759766,  -0.10107924044132232666016,  -0.17162449657917022705078,  0.06138955429196357727051,  0.06424434483051300048828,
 0.13154169917106628417969,  -0.01474511437118053436279,  0.12705139815807342529297,  -0.20026327669620513916016,  0.21675696969032287597656,  -0.17415732145309448242188,  0.14810493588447570800781,  -0.10157578438520431518555,  -0.02908675558865070343018,  -0.23875381052494049072266,
 0.06961263716220855712891,  0.11417244374752044677734,  -0.15268912911415100097656,  0.19603686034679412841797,  -0.08219630271196365356445,  -0.17711395025253295898438,  0.30441731214523315429688,  0.12845450639724731445312,  0.03417042270302772521973,  0.01826009154319763183594,
 -0.09796711057424545288086,  0.18067635595798492431641,  0.19374755024909973144531,  -0.06240716204047203063965,  0.26353418827056884765625,  -0.30313161015510559082031,  0.14121763408184051513672,  0.32601645588874816894531,  -0.02539693377912044525146,  -0.13471420109272003173828,
 -0.23411086201667785644531,  0.10609381645917892456055,  -0.02536010742187500000000,  -0.11209762096405029296875,  -0.08063586801290512084961,  0.13745443522930145263672,  -0.13970090448856353759766,  -0.28521046042442321777344,  0.19873622059822082519531,  0.07736220955848693847656,
 0.12459144741296768188477,  0.01937797665596008300781,  -0.00765339192003011703491,  -0.21160884201526641845703,  0.07669385522603988647461,  0.14153090119361877441406,  -0.10388295352458953857422,  -0.12775284051895141601562,  0.20198729634284973144531,  -0.23982052505016326904297,
 0.26888263225555419921875,  -0.06965835392475128173828,  -0.05441161990165710449219,  0.04485048726201057434082,  -0.14551959931850433349609,  0.05230249464511871337891,  -0.28256544470787048339844,  0.18963785469532012939453,  0.01706166751682758331299,  0.05221340060234069824219,
 0.10337532311677932739258,  -0.07765537500381469726562,  -0.12941589951515197753906,  -0.11905808001756668090820,  -0.13108688592910766601562,  -0.21863369643688201904297,  0.24132685363292694091797,  0.10522647202014923095703,  -0.24214413762092590332031,  0.12773519754409790039062,
 -0.18680588901042938232422,  -0.12785656750202178955078,  -0.00348014314658939838409,  -0.20646138489246368408203,  0.18334041535854339599609,  -0.03774208575487136840820,  0.09149884432554244995117,  -0.18928195536136627197266,  0.20021700859069824218750,  0.09593431651592254638672,
 -0.14810098707675933837891,  0.25422331690788269042969,  0.04794867336750030517578,  -0.11022655665874481201172,  0.00275197718292474746704,  -0.08892097324132919311523,  0.03036338277161121368408,  -0.29773181676864624023438,  0.00900019984692335128784,  0.26584035158157348632812,
 -0.20270958542823791503906,  -0.25217679142951965332031,  0.02666675485670566558838,  -0.12612912058830261230469,  -0.06583463400602340698242,  -0.05993250384926795959473,  -0.10691885650157928466797,  0.24803884327411651611328,  -0.15781049430370330810547,  0.14077556133270263671875,
 0.14464825391769409179688,  -0.08960921317338943481445,  -0.30187189579010009765625,  -0.23280128836631774902344,  -0.08476760238409042358398,  0.28633722662925720214844,  0.20844732224941253662109,  0.01047140359878540039062,  0.16348506510257720947266,  0.09568151831626892089844,
 -0.00217721401713788509369,  -0.19646660983562469482422,  0.20232473313808441162109,  0.13302476704120635986328,  0.12230391055345535278320,  0.12367114424705505371094,  0.09180788695812225341797,  -0.01470417063683271408081,  0.14530527591705322265625,  -0.02363470755517482757568,
 -0.08538878709077835083008,  0.14841125905513763427734,  -0.07654751837253570556641,  -0.10788269340991973876953,  0.10845908522605895996094,  -0.14524976909160614013672,  -0.28012624382972717285156,  -0.17952129244804382324219,  0.11325018107891082763672,  -0.05679199099540710449219,
 -0.16285252571105957031250,  -0.29602071642875671386719,  0.19280591607093811035156,  -0.08863392472267150878906,  -0.11178057640790939331055,  -0.17068910598754882812500,  0.08899692445993423461914,  0.03335059434175491333008,  0.02869312651455402374268,  -0.11462432891130447387695,
 0.18291889131069183349609,  0.09691202640533447265625,  0.09615293890237808227539,  -0.19777169823646545410156,  0.18861956894397735595703,  0.22247095406055450439453,  0.09166853129863739013672,  -0.26859691739082336425781,  -0.08187994360923767089844,  -0.20932155847549438476562,
 -0.23272573947906494140625,  -0.24782395362854003906250,  -0.16489048302173614501953,  -0.04160158336162567138672,  0.16439788043498992919922,  -0.23901952803134918212891,  -0.05536547303199768066406,  0.18032962083816528320312,  -0.20229339599609375000000,  0.25054800510406494140625,
 0.18219497799873352050781,  0.11514589935541152954102,  -0.02752270177006721496582,  -0.16173179447650909423828,  -0.00946664717048406600952,  -0.22481700778007507324219,  -0.06857319921255111694336,  -0.15809403359889984130859,  0.18406830728054046630859,  -0.04877906665205955505371,
 0.21135123074054718017578,  -0.25777643918991088867188,  0.14286547899246215820312,  -0.24791245162487030029297,  0.26989674568176269531250,  -0.26863643527030944824219,  0.10130538791418075561523,  0.22041611373424530029297,  -0.00909739267081022262573,  0.14045201241970062255859,
 -0.00557239586487412452698,  -0.03245168924331665039062,  -0.06483887135982513427734,  0.02842526137828826904297,  -0.13583783805370330810547,  0.21911698579788208007812,  -0.10804876685142517089844,  0.20184639096260070800781,  0.12096723169088363647461,  -0.27920484542846679687500,
 -0.00088998873252421617508,  0.18543359637260437011719,  -0.26847779750823974609375,  0.01395850814878940582275,  0.33607372641563415527344,  -0.11236443370580673217773,  0.04243893921375274658203,  0.13573278486728668212891,  -0.22835305333137512207031,  -0.07348702102899551391602,
 0.04515146091580390930176,  0.22075292468070983886719,  0.16715064644813537597656,  0.24491626024246215820312,  -0.08721946924924850463867,  -0.23296864330768585205078,  -0.09494972974061965942383,  -0.02189178206026554107666,  0.24811948835849761962891,  -0.08673436194658279418945,
 0.12811756134033203125000,  -0.01849957555532455444336,  -0.24517174065113067626953,  0.18124671280384063720703,  -0.13719502091407775878906,  -0.25030317902565002441406,  -0.27856436371803283691406,  0.02251269482076168060303,  0.01981605775654315948486,  0.17391665279865264892578,
 -0.09039579331874847412109,  -0.06495052576065063476562,  -0.22653071582317352294922,  0.04487673938274383544922,  0.19387824833393096923828,  -0.22315554320812225341797,  -0.13704787194728851318359,  -0.07941617816686630249023,  0.00880390126258134841919,  0.00271089724265038967133,
 0.09422623366117477416992,  0.16608804464340209960938,  -0.20532666146755218505859,  0.01093247067183256149292,  -0.20194368064403533935547,  0.28407326340675354003906,  0.20235240459442138671875,  -0.06618781387805938720703,  0.09800215065479278564453,  0.03007563203573226928711,
 0.20375809073448181152344,  -0.01054774783551692962646,  0.03398454934358596801758,  -0.24412319064140319824219,  0.15487776696681976318359,  0.06450106948614120483398,  -0.01781884394586086273193,  -0.09755228459835052490234,  0.12406875938177108764648,  0.08553081005811691284180,
 -0.05445495247840881347656,  -0.25721278786659240722656,  -0.28526651859283447265625,  0.07278343290090560913086,  0.02188860625028610229492,  0.07909359782934188842773,  -0.02546451427042484283447,  0.34447628259658813476562,  -0.18417018651962280273438,  -0.29496780037879943847656,
 -0.24817460775375366210938,  0.03217147663235664367676,  0.02837669476866722106934,  0.22690901160240173339844,  -0.24878212809562683105469,  0.17927786707878112792969,  0.16527207195758819580078,  -0.21654437482357025146484,  0.12551788985729217529297,  -0.23723646998405456542969,
 0.10349465906620025634766,  -0.26756188273429870605469,  -0.01900245994329452514648,  -0.01574856974184513092041,  -0.31220403313636779785156,  0.31282624602317810058594,  -0.09023319929838180541992,  -0.07542466372251510620117,  0.20443671941757202148438,  -0.29052019119262695312500,
 -0.21596552431583404541016,  0.29197576642036437988281,  -0.09200255572795867919922,  0.26680919528007507324219,  0.10230895876884460449219,  0.25228956341743469238281,  -0.07590021938085556030273,  0.11840809881687164306641,  0.16093944013118743896484,  0.17761360108852386474609};
#endif

