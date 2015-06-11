#ifndef gem_hw_vmeTDC_HwVMETDC_h
#define gem_hw_vmeTDC_HwVMETDC_h

//Common includes for all devices
#include "xdaq/Application.h"

#include "xdata/String.h"
#include "xdata/UnsignedLong.h"
#include "xdata/UnsignedInteger32.h"
#include "xdata/ActionListener.h"

#include "gem/hw/vmeTDC/exception/Exception.h"

//Parent class (uTCA based?)
//#include "gem/hw/GEMHwDevice.h"

//Parent class (VME based)
//#include "gem/hw/GEMHwDeviceVME.h" //<--- Need to make this

//This might be uTCA based...?
typedef uhal::exception::exception uhalException;
//typedef hal::exception::exception halException; //<--- VME?

//This might be uTCA based...?
namespace uhal {	class HwInterface;}
//namespace hal {	class HwInterface;}	//<--- VME?

namespace gem {
  namespace hw {
    namespace vmeTDC {
      
      class HwVMETDC: public gem::hw::GEMHwDeviceVME
	{

	public:
	  //public data members
	  //===================
	  /* define public data members here */

	  //public methods
	  //==============
	  //XDAQ_INSTANTIATOR();

	  //Constructor
	  HwVMETDC(/* parameters */);

	  //Destructor
	  ~HwVMETDC();

	  /* define additional public methods below */

	protected:
	  //protected data members
	  //======================
	  /* define protected data members here */

	  //protected methods
	  //=================
	  /* define protected methods below */

	}; //end class HwVMETDC

    } //end namespace gem::hw::vmeTDC
  } //end namespace gem::hw
} //end namespace gem

#endif
