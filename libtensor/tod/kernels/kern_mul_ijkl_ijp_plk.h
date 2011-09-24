#ifndef LIBTENSOR_KERN_MUL_IJKL_IJP_PLK_H
#define LIBTENSOR_KERN_MUL_IJKL_IJP_PLK_H

#include "kern_mul_ijk_ip_pkj.h"

namespace libtensor {


/**
	\ingroup libtensor_tod_kernel
 **/
class kern_mul_ijkl_ijp_plk : public kernel_base<2, 1> {
	friend class kern_mul_ijklm_ikp_jpml;

public:
	static const char *k_clazz; //!< Kernel name

private:
	double m_d;
	size_t m_ni, m_nj, m_nk, m_nl, m_np;
	size_t m_sia, m_sja, m_spb, m_slb, m_sic, m_sjc, m_skc;

public:
	virtual ~kern_mul_ijkl_ijp_plk() { }

	virtual const char *get_name() const {
		return k_clazz;
	}

	virtual void run(const loop_registers<2, 1> &r);

	static kernel_base<2, 1> *match(const kern_mul_ijk_ip_pkj &z,
		list_t &in, list_t &out);

};


} // namespace libtensor

#endif // LIBTENSOR_KERN_MUL_IJKL_IJP_PLK_H