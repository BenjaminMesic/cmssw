#include "JetMETCorrections/FFTJetModules/plugins/FFTJetCorrectionESProducer.h"

//
// define this as a plug-in
//
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo0Sys> FFTCalo0SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo1Sys> FFTCalo1SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo2Sys> FFTCalo2SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo3Sys> FFTCalo3SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo4Sys> FFTCalo4SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo5Sys> FFTCalo5SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo6Sys> FFTCalo6SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo7Sys> FFTCalo7SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo8Sys> FFTCalo8SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::Calo9Sys> FFTCalo9SysCorrectionESProducer;

DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo0SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo1SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo2SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo3SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo4SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo5SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo6SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo7SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo8SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCalo9SysCorrectionESProducer);