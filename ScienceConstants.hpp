/*----------
  ver 240615
  ----------*/

#ifndef ScienceConstants_hpp
#define ScienceConstants_hpp

namespace ScienceConstants{

  //Universal constants

  double CharacteristicImpedanceOfVacuum = 376.730313412;
  double NewtonianConstantOfGravitation = 6.67430e-11;
  double PlanckConstant = 6.62607015e-34;
  double PlanckLength = 1.616255e-35;
  double PlanckMass = 2.176434e-8;
  double PlanckTemperature = 1.416784e32;
  double PlanckTime = 5.391247e-44;
  double ReducedPlanckConstant = 1.054571817e-34;
    double DiracConstant = 1.054571817e-34;
  double DpeedOfLightInVacuum = 299792458;
    double DpeedOfLight = 299792458;
  double VacuumElectricPermittivity = 8.8541878188e-12;
  double VacuumMagneticPermeability = 1.25663706127e-6;

  //Electromagnetic constants

  double BohrMagneton = 9.2740100657e-24;
  double ElementaryCharge = 1.602176634e-19;
  double JosephsonConstant = 483597.8484e9;
  double MagneticFluxQuantum = 2.067833848e-15;
  double NuclearMagneton = 5.0507837393e-27;
  double VonKlitzingConstant = 25812.80745;

  //Atomic and nuclear constants

  double AlphaParticleMass = 6.6446573450e-27;
  double BohrRadius = 5.29177210544e-11;
  double ComptonWavelength = 2.42631023538e-12;
  double ElectronMass = 9.1093837139e-31;
  double FineStructureConstant = 7.2973525643e-3;
  double MuonMass = 1.883531627e-28;
  double NeutronMass = 1.67492750056e-27;
  double ProtonMass = 1.67262192595e-27;
  double RydbergConstant = 10973731.568157;
  double TauMass = 3.16754e-27;

  //Physico-chemical constants

  double AtomicMassConstant = 1.66053906892e-27;
  double AvogadroConstant = 6.02214076e23;
  double BoltzmannConstant = 1.380649e-23;
  double FaradayConstant = 96485.33212;
  double MolarGasConstant =  8.314462618;
  double StefanBoltzmannConstant = 5.670374419e8;

  //Defined constants

  double StandardAccelerationOfGravity = 9.80665;
  double StandardAtmosphere = 101325;

  namespace Symbol{

    //Universal constants

    double Z0 = 376.730313412;
    double G = 6.67430e-11;
    double h = 6.62607015e-34;
    double lP = 1.616255e-35;
      double lp = 1.616255e-35;
    double mP = 2.176434e-8;
    double TP = 1.416784e32;
      double Tp = 1.416784e32;
    double tP = 5.391247e-44;
      double tp = 5.391247e-44;
    double hbar = 1.054571817e-34;
    double c = 299792458;
      double c0 = 299792458;
    double epsilon0 = 8.8541878188e-12;
    double mu0 = 1.25663706127e-6;

    //Electromagnetic constants

    double muB = 9.2740100657e-24;
    double e = 1.602176634e-19;
    double KJ = 483597.8484e9;
    double Phi0 = 2.067833848e-15;
    double muN = 5.0507837393e-27;
    double RK = 25812.80745;

    //Atomic and nuclear constants

    double malpha = 6.6446573450e-27;
    double a0 = 5.29177210544e-11;
    double lambdaC = 2.42631023538e-12;
    double me = 9.1093837139e-31;
    double alpha = 7.2973525643e-3;
    double mmu = 1.883531627e-28;
    double mn = 1.67492750056e-27;
    double mp = 1.67262192595e-27;
    double Rinfty = 10973731.568157;
      double Rinfinity = 10973731.568157;
      double Rinf = 10973731.568157;
    double mtau = 3.16754e-27;

    //Physico-chemical constants

    double mu = 1.66053906892e-27;
      double u = 1.66053906892e-27;
    double NA = 6.02214076e23;
    double k = 1.380649e-23;
      double kB = 1.380649e-23;
    double F = 96485.33212;
    double R =  8.314462618;
    double sigma = 5.670374419e8;

    //Defined constants

    double gn = 9.80665;
      double g = 9.80665;
    double atm = 101325;
    
  };  
};

//Alias

namespace SciConst = ScienceConstants;

namespace SciConstSym = ScienceConstants::Symbol;

#endif //ScienceConstants_hpp
