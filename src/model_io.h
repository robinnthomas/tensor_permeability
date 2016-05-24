#ifndef TP_MODELIO_H
#define TP_MODELIO_H

#include <memory>

namespace csmp {
	template<size_t> class Model;
	template<size_t> class PropertyDatabase;

	namespace tperm {
		// forwards
		class Settings;

		bool write_vfile(const char* fname, const csmp::PropertyDatabase<3>&);

		std::unique_ptr<csmp::Model<3>> load_model(const Settings&);

		std::unique_ptr<csmp::PropertyDatabase<3>> property_database(bool two_d);

	} // !tperm
} // !csmp

#endif // !TP_MODELIO_H