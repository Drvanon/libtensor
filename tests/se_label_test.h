#ifndef LIBTENSOR_SE_LABEL_TEST_H
#define LIBTENSOR_SE_LABEL_TEST_H

#include <libtest/unit_test.h>

namespace libtensor {

/**	\brief Tests the libtensor::se_label class

	\ingroup libtensor_tests
 **/
class se_label_test : public libtest::unit_test {
public:
	virtual void perform() throw(libtest::test_exception);

private:
	void test_1() throw(libtest::test_exception);
	void test_2() throw(libtest::test_exception);
	void test_3() throw(libtest::test_exception);
	void test_4() throw(libtest::test_exception);
};

} // namespace libtensor

#endif // LIBTENSOR_SE_LABEL_TEST_H
