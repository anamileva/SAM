#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Thermalrate.h"

SAM_EXPORT int SAM_Thermalrate_execute(SAM_table data, int verbosity, SAM_error* err){
	return SAM_module_exec("thermalrate", data, verbosity, err);
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_en_thermal_rates_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_thermal_rates", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_fuelcell_power_thermal_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "fuelcell_power_thermal", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_buy_rate_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "thermal_buy_rate", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_buy_rate_flat_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "thermal_buy_rate_flat", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_buy_rate_option_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "thermal_buy_rate_option", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_degradation_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "thermal_degradation", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_load_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "thermal_load", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_load_escalation_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "thermal_load_escalation", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_rate_escalation_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "thermal_rate_escalation", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_sell_rate_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "thermal_sell_rate", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_sell_rate_flat_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "thermal_sell_rate_flat", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_ThermalRate_thermal_sell_rate_option_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "thermal_sell_rate_option", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_Lifetime_analysis_period_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "analysis_period", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_Lifetime_inflation_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inflation_rate", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_Lifetime_system_use_lifetime_output_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_use_lifetime_output", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_degradation_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "degradation", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_land_area_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "land_area", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_capacity_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_capacity", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_capacity_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_capacity_escal", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_fixed_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fixed", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_fixed_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_fixed_escal", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_land_lease_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_land_lease", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_land_lease_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_land_lease_escal", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_production_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_production", arr, length);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_om_production_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_production_escal", number);
	});
}

SAM_EXPORT void SAM_Thermalrate_HybridCosts_total_installed_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "total_installed_cost", number);
	});
}

SAM_EXPORT double SAM_Thermalrate_ThermalRate_en_thermal_rates_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_thermal_rates", &result))
		make_access_error("SAM_Thermalrate", "en_thermal_rates");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_fuelcell_power_thermal_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "fuelcell_power_thermal", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "fuelcell_power_thermal");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_thermal_buy_rate_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_buy_rate", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_buy_rate");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_ThermalRate_thermal_buy_rate_flat_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_buy_rate_flat", &result))
		make_access_error("SAM_Thermalrate", "thermal_buy_rate_flat");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_ThermalRate_thermal_buy_rate_option_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_buy_rate_option", &result))
		make_access_error("SAM_Thermalrate", "thermal_buy_rate_option");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_thermal_degradation_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_degradation", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_degradation");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_thermal_load_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_load", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_load");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_thermal_load_escalation_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_load_escalation", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_load_escalation");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_thermal_rate_escalation_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_rate_escalation", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_rate_escalation");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_ThermalRate_thermal_sell_rate_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_sell_rate", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_sell_rate");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_ThermalRate_thermal_sell_rate_flat_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_sell_rate_flat", &result))
		make_access_error("SAM_Thermalrate", "thermal_sell_rate_flat");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_ThermalRate_thermal_sell_rate_option_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_sell_rate_option", &result))
		make_access_error("SAM_Thermalrate", "thermal_sell_rate_option");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Lifetime_analysis_period_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "analysis_period", &result))
		make_access_error("SAM_Thermalrate", "analysis_period");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Lifetime_inflation_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inflation_rate", &result))
		make_access_error("SAM_Thermalrate", "inflation_rate");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Lifetime_system_use_lifetime_output_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_lifetime_output", &result))
		make_access_error("SAM_Thermalrate", "system_use_lifetime_output");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_HybridCosts_degradation_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "degradation", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "degradation");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_HybridCosts_land_area_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "land_area", &result))
		make_access_error("SAM_Thermalrate", "land_area");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_HybridCosts_om_capacity_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_capacity", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "om_capacity");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_HybridCosts_om_capacity_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_capacity_escal", &result))
		make_access_error("SAM_Thermalrate", "om_capacity_escal");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_HybridCosts_om_fixed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fixed", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "om_fixed");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_HybridCosts_om_fixed_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_fixed_escal", &result))
		make_access_error("SAM_Thermalrate", "om_fixed_escal");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_HybridCosts_om_land_lease_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_land_lease", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "om_land_lease");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_HybridCosts_om_land_lease_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_land_lease_escal", &result))
		make_access_error("SAM_Thermalrate", "om_land_lease_escal");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_HybridCosts_om_production_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_production", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "om_production");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_HybridCosts_om_production_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_production_escal", &result))
		make_access_error("SAM_Thermalrate", "om_production_escal");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_HybridCosts_total_installed_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "total_installed_cost", &result))
		make_access_error("SAM_Thermalrate", "total_installed_cost");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_Outputs_annual_thermal_value_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "annual_thermal_value", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "annual_thermal_value");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_Outputs_cf_land_lease_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_land_lease_expense", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "cf_land_lease_expense");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_Outputs_thermal_cost_with_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_cost_with_system", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_cost_with_system");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Outputs_thermal_cost_with_system_year1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_cost_with_system_year1", &result))
		make_access_error("SAM_Thermalrate", "thermal_cost_with_system_year1");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_Outputs_thermal_cost_without_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_cost_without_system", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_cost_without_system");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Outputs_thermal_cost_without_system_year1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_cost_without_system_year1", &result))
		make_access_error("SAM_Thermalrate", "thermal_cost_without_system_year1");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Outputs_thermal_load_year1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_load_year1", &result))
		make_access_error("SAM_Thermalrate", "thermal_load_year1");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_Outputs_thermal_revenue_with_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_revenue_with_system", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_revenue_with_system");
	});
	return result;
}

SAM_EXPORT double* SAM_Thermalrate_Outputs_thermal_revenue_without_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "thermal_revenue_without_system", length);
	if (!result)
		make_access_error("SAM_Thermalrate", "thermal_revenue_without_system");
	});
	return result;
}

SAM_EXPORT double SAM_Thermalrate_Outputs_thermal_savings_year1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "thermal_savings_year1", &result))
		make_access_error("SAM_Thermalrate", "thermal_savings_year1");
	});
	return result;
}

