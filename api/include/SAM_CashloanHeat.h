#ifndef SAM_CASHLOANHEAT_H_
#define SAM_CASHLOANHEAT_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// CashloanHeat Technology Model
	//

	/** 
	 * Create a CashloanHeat variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_CashloanHeat;

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_CashloanHeat_execute(SAM_table data, int verbosity, SAM_error* err);


	//
	// FinancialParameters parameters
	//

	/**
	 * Set analysis_period: Analyis period [years]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=50
	 * required if: ?=30
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_analysis_period_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set debt_fraction: Debt percentage [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_debt_fraction_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set federal_tax_rate: Federal income tax rate [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_federal_tax_rate_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set inflation_rate: Inflation rate [%]
	 * options: None
	 * constraints: MIN=-99
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_inflation_rate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set insurance_rate: Insurance rate [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_insurance_rate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set loan_rate: Loan rate [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_loan_rate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set loan_term: Loan term [years]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=50
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_loan_term_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set market: Residential or Commercial Market [0/1]
	 * options: 0=residential,1=comm.
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_market_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set mortgage: Use mortgage style loan (res. only) [0/1]
	 * options: 0=standard loan,1=mortgage
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_mortgage_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set prop_tax_assessed_decline: Assessed value annual decline [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=5
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_prop_tax_assessed_decline_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set prop_tax_cost_assessed_percent: Percent of pre-financing costs assessed [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=95
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_prop_tax_cost_assessed_percent_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set property_tax_rate: Property tax rate [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_property_tax_rate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set real_discount_rate: Real discount rate [%]
	 * options: None
	 * constraints: MIN=-99
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_real_discount_rate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set salvage_percentage: Salvage value percentage [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_salvage_percentage_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set state_tax_rate: State income tax rate [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_state_tax_rate_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set system_capacity: System nameplate capacity [kW]
	 * options: None
	 * constraints: POSITIVE
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_system_capacity_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set system_heat_rate: System heat rate [MMBTus/MWh]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FinancialParameters_system_heat_rate_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// SystemCosts parameters
	//

	/**
	 * Set add_om_num_types: Number of O and M types
	 * options: battery,fuelcell
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_add_om_num_types_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set annual_fuel_usage: Fuel usage (yr 1) [kWht]
	 * options: generic_system,fuelcell,tcslinearfresnel,tcstroughempirical,tcsgenericsolar,fresnelphysical
	 * constraints: MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_annual_fuel_usage_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set annual_fuel_usage_lifetime: Fuel usage (lifetime) [kWht]
	 * options: generic_system,fuelcell,tcslinearfresnel,tcstroughempirical,tcsgenericsolar,fresnelphysical
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_annual_fuel_usage_lifetime_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_batt_capacity_cost: Battery capacity-based System Costs amount [$/kWcap]
	 * options: battery
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_batt_capacity_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_batt_fixed_cost: Battery fixed System Costs annual amount [$/year]
	 * options: battery
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_batt_fixed_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_batt_nameplate: Battery capacity for System Costs values [kW]
	 * options: battery
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_batt_nameplate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_batt_replacement_cost: Replacement cost 1 [$/kWh]
	 * options: battery
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_batt_replacement_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_batt_variable_cost: Battery production-based System Costs amount [$/MWh]
	 * options: battery
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_batt_variable_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_capacity_escal: Capacity-based O&M escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_capacity_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_capacity_heat: Capacity-based O&M amount [$/kWt-yr]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_capacity_heat_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_elec_price_for_heat_techs: Electricity price for purchases in heat model [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_elec_price_for_heat_techs_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_elec_price_for_heat_techs_escal: Escalation for electricity price for purchases in heat model [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_elec_price_for_heat_techs_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fixed: Fixed O&M annual amount [$/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fixed_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fixed_escal: Fixed O&M escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fixed_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fuel_cost: Fuel cost [$/MMBtu]
	 * options: generic_system,fuelcell,tcslinearfresnel,tcstroughempirical,tcsgenericsolar,fresnelphysical
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuel_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuel_cost_escal: Fuel cost escalation [%/year]
	 * options: generic_system,fuelcell,tcslinearfresnel,tcstroughempirical,tcsgenericsolar,fresnelphysical
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuel_cost_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fuelcell_capacity_cost: Fuel cell capacity-based System Costs amount [$/kWcap]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuelcell_capacity_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuelcell_fixed_cost: Fuel cell fixed System Costs annual amount [$/year]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuelcell_fixed_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuelcell_nameplate: Fuel cell capacity for System Costs values [kW]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuelcell_nameplate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fuelcell_replacement_cost: Replacement cost 2 [$/kW]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuelcell_replacement_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuelcell_variable_cost: Fuel cell production-based System Costs amount [$/MWh]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_fuelcell_variable_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_opt_fuel_1_cost: Biomass feedstock cost [$/unit]
	 * options: biomass
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_opt_fuel_1_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_opt_fuel_1_cost_escal: Biomass feedstock cost escalation [%/year]
	 * options: biomass
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_opt_fuel_1_cost_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_opt_fuel_1_usage: Biomass feedstock usage [unit]
	 * options: biomass
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_opt_fuel_1_usage_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_opt_fuel_2_cost: Coal feedstock cost [$/unit]
	 * options: biomass
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_opt_fuel_2_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_opt_fuel_2_cost_escal: Coal feedstock cost escalation [%/year]
	 * options: biomass
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_opt_fuel_2_cost_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_opt_fuel_2_usage: Coal feedstock usage [unit]
	 * options: biomass
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_opt_fuel_2_usage_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_production1_values: Battery production for System Costs values [kWh]
	 * options: battery
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_production1_values_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_production2_values: Fuel cell production for System Costs values [kWh]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_production2_values_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_production_escal: Production-based O&M escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_production_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_production_heat: Production-based O&M amount [$/MWht]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_production_heat_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_replacement_cost_escal: Replacement cost escalation [%/year]
	 * options: battery,fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_om_replacement_cost_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set total_installed_cost: Total installed cost [$]
	 * options: None
	 * constraints: MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemCosts_total_installed_cost_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// LandLease parameters
	//

	/**
	 * Set land_area: Total land area [acres]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_LandLease_land_area_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_land_lease: Land lease cost [$/acre]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_LandLease_om_land_lease_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_land_lease_escal: Land lease cost escalation [%/yr]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_LandLease_om_land_lease_escal_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// Depreciation parameters
	//

	/**
	 * Set depr_fed_custom: Federal custom depreciation [%/year]
	 * options: None
	 * constraints: None
	 * required if: depr_fed_type=3
	 */
	SAM_EXPORT void SAM_CashloanHeat_Depreciation_depr_fed_custom_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set depr_fed_sl_years: Federal depreciation straight-line Years [years]
	 * options: None
	 * constraints: INTEGER,POSITIVE
	 * required if: depr_fed_type=2
	 */
	SAM_EXPORT void SAM_CashloanHeat_Depreciation_depr_fed_sl_years_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set depr_fed_type: Federal depreciation type
	 * options: 0=none,1=macrs_half_year,2=sl,3=custom
	 * constraints: INTEGER,MIN=0,MAX=3
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_Depreciation_depr_fed_type_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set depr_sta_custom: State custom depreciation [%/year]
	 * options: None
	 * constraints: None
	 * required if: depr_sta_type=3
	 */
	SAM_EXPORT void SAM_CashloanHeat_Depreciation_depr_sta_custom_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set depr_sta_sl_years: State depreciation straight-line years [years]
	 * options: None
	 * constraints: INTEGER,POSITIVE
	 * required if: depr_sta_type=2
	 */
	SAM_EXPORT void SAM_CashloanHeat_Depreciation_depr_sta_sl_years_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set depr_sta_type: State depreciation type
	 * options: 0=none,1=macrs_half_year,2=sl,3=custom
	 * constraints: INTEGER,MIN=0,MAX=3
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_Depreciation_depr_sta_type_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// TaxCreditIncentives parameters
	//

	/**
	 * Set itc_fed_amount: Federal amount-based ITC amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set itc_fed_amount_deprbas_fed: Federal amount-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_fed_amount_deprbas_sta: Federal amount-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_fed_percent: Federal percentage-based ITC percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set itc_fed_percent_deprbas_fed: Federal percentage-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_fed_percent_deprbas_sta: Federal percentage-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_fed_percent_maxvalue: Federal percentage-based ITC maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_maxvalue_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set itc_sta_amount: State amount-based ITC amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set itc_sta_amount_deprbas_fed: State amount-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_sta_amount_deprbas_sta: State amount-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_sta_percent: State percentage-based ITC percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set itc_sta_percent_deprbas_fed: State percentage-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_sta_percent_deprbas_sta: State percentage-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set itc_sta_percent_maxvalue: State percentage-based ITC maximum Value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_maxvalue_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set ptc_fed_amount: Federal PTC amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set ptc_fed_amount_heat_btu: Federal PTC amount [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_amount_heat_btu_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set ptc_fed_escal: Federal PTC escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ptc_fed_term: Federal PTC term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_term_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ptc_sta_amount: State PTC amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set ptc_sta_amount_heat_btu: State PTC amount [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_amount_heat_btu_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set ptc_sta_escal: State PTC escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ptc_sta_term: State PTC term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_term_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// PaymentIncentives parameters
	//

	/**
	 * Set cbi_fed_amount: Federal CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_fed_amount_heat_btu: Federal CBI amount [$/(Btu/hr))]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_amount_heat_btu_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_fed_deprbas_fed: Federal CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_fed_deprbas_sta: Federal CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_fed_maxvalue: Federal CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_fed_tax_fed: Federal CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_fed_tax_sta: Federal CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_fed_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_amount: Other CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_amount_heat_btu: Other CBI amount [$/(Btu/hr))]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_amount_heat_btu_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_deprbas_fed: Other CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_deprbas_sta: Other CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_maxvalue: Other CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_tax_fed: Other CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_oth_tax_sta: Other CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_oth_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_amount: State CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_amount_heat_btu: State CBI amount [$/(Btu/hr))]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_amount_heat_btu_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_deprbas_fed: State CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_deprbas_sta: State CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_maxvalue: State CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_tax_fed: State CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_sta_tax_sta: State CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_sta_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_amount: Utility CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_amount_heat_btu: Utility CBI amount [$/(Btu/hr))]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_amount_heat_btu_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_deprbas_fed: Utility CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_deprbas_sta: Utility CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_maxvalue: Utility CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_tax_fed: Utility CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set cbi_uti_tax_sta: Utility CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_cbi_uti_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_amount: Federal amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_deprbas_fed: Federal amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_deprbas_sta: Federal amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_tax_fed: Federal amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_tax_sta: Federal amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_percent: Federal percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_deprbas_fed: Federal percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_deprbas_sta: Federal percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_maxvalue: Federal percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_tax_fed: Federal percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_tax_sta: Federal percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_amount: Other amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_deprbas_fed: Other amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_deprbas_sta: Other amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_tax_fed: Other amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_tax_sta: Other amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_percent: Other percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_deprbas_fed: Other percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_deprbas_sta: Other percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_maxvalue: Other percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_tax_fed: Other percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_tax_sta: Other percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_amount: State amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_deprbas_fed: State amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_deprbas_sta: State amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_tax_fed: State amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_tax_sta: State amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_percent: State percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_deprbas_fed: State percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_deprbas_sta: State percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_maxvalue: State percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_tax_fed: State percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_tax_sta: State percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_amount: Utility amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_deprbas_fed: Utility amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_deprbas_sta: Utility amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_tax_fed: Utility amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_tax_sta: Utility amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_percent: Utility percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_deprbas_fed: Utility percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_deprbas_sta: Utility percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_maxvalue: Utility percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_tax_fed: Utility percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_tax_sta: Utility percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_fed_amount: Federal PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_fed_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_fed_amount_heat_btu: Federal PBI amount [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_fed_amount_heat_btu_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_fed_escal: Federal PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_fed_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_fed_tax_fed: Federal PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_fed_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_fed_tax_sta: Federal PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_fed_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_fed_term: Federal PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_fed_term_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_oth_amount: Other PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_oth_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_oth_amount_heat_btu: Other PBI amount [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_oth_amount_heat_btu_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_oth_escal: Other PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_oth_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_oth_tax_fed: Other PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_oth_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_oth_tax_sta: Other PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_oth_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_oth_term: Other PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_oth_term_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_sta_amount: State PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_sta_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_sta_amount_heat_btu: State PBI amount [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_sta_amount_heat_btu_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_sta_escal: State PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_sta_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_sta_tax_fed: State PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_sta_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_sta_tax_sta: State PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_sta_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_sta_term: State PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_sta_term_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_uti_amount: Utility PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_uti_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_uti_amount_heat_btu: Utility PBI amount [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_uti_amount_heat_btu_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set pbi_uti_escal: Utility PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_uti_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_uti_tax_fed: Utility PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_uti_tax_fed_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_uti_tax_sta: Utility PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_uti_tax_sta_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set pbi_uti_term: Utility PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_PaymentIncentives_pbi_uti_term_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// BatterySystem parameters
	//

	/**
	 * Set batt_bank_replacement: Battery bank replacements per year [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_batt_bank_replacement_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set batt_computed_bank_capacity: Battery bank capacity [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_batt_computed_bank_capacity_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set batt_replacement_option: Enable battery replacement? [0=none,1=capacity based,2=user schedule]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_batt_replacement_option_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set batt_replacement_schedule_percent: Percentage of battery capacity to replace in each year [%]
	 * options: length <= analysis_period
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_batt_replacement_schedule_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set battery_per_kWh: Battery cost [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_battery_per_kWh_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set en_batt: Enable battery storage model [0/1]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_en_batt_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set en_standalone_batt: Enable standalone battery storage model [0/1]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_en_standalone_batt_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set en_wave_batt: Enable standalone battery storage model [0/1]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_BatterySystem_en_wave_batt_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// FuelCell parameters
	//

	/**
	 * Set annual_fuel_usage_lifetime: Annual Fuel Usage (lifetime) [kWht]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_annual_fuel_usage_lifetime_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set en_fuelcell: Enable fuel cell storage model [0/1]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_en_fuelcell_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_annual_energy_discharged: Fuel cell annual energy discharged [kWh]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_fuelcell_annual_energy_discharged_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set fuelcell_computed_bank_capacity: Fuel cell capacity [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_fuelcell_computed_bank_capacity_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_per_kWh: Fuel cell cost [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_fuelcell_per_kWh_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_replacement: Fuel cell replacements per year [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_fuelcell_replacement_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set fuelcell_replacement_option: Enable fuel cell replacement? [0=none,1=capacity based,2=user schedule]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_fuelcell_replacement_option_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_replacement_schedule: Fuel cell replacements per year (user specified) [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_FuelCell_fuelcell_replacement_schedule_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// ChargesByMonth parameters
	//

	/**
	 * Set charge_w_sys_dc_tou_ym: Demand charge with system (TOU) [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_charge_w_sys_dc_tou_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set charge_w_sys_ec_ym: Energy charge with system [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_charge_w_sys_ec_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set charge_w_sys_fixed_ym: Fixed monthly charge with system [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_charge_w_sys_fixed_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set net_billing_credits_ym: Net billing credit [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_net_billing_credits_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set nm_dollars_applied_ym: Net metering credit [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_nm_dollars_applied_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set true_up_credits_ym: Net annual true-up payments [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_true_up_credits_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set utility_bill_w_sys: Electricity bill for system [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ChargesByMonth_utility_bill_w_sys_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// Battery parameters
	//

	/**
	 * Set batt_capacity_percent: Battery relative capacity to nameplate [%]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_Battery_batt_capacity_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_batt_to_grid: Energy to grid from battery [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_Battery_monthly_batt_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_grid_to_batt: Energy to battery from grid [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_Battery_monthly_grid_to_batt_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_grid_to_load: Energy to load from grid [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_Battery_monthly_grid_to_load_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// TimeSeries parameters
	//

	/**
	 * Set year1_hourly_dc_with_system: Demand charge with system (year 1 hourly) [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_TimeSeries_year1_hourly_dc_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set year1_hourly_e_fromgrid: Electricity from grid (year 1 hourly) [kWh]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_TimeSeries_year1_hourly_e_fromgrid_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set year1_hourly_ec_with_system: Energy charge with system (year 1 hourly) [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_TimeSeries_year1_hourly_ec_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// SystemOutput parameters
	//

	/**
	 * Set annual_energy_value: Energy value [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemOutput_annual_energy_value_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set annual_thermal_value: Energy value [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemOutput_annual_thermal_value_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set degradation: Annual degradation [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemOutput_degradation_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set gen: Power generated by renewable resource [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemOutput_gen_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set gen_purchases: Electricity from grid to system [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_SystemOutput_gen_purchases_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// Lifetime parameters
	//

	/**
	 * Set system_use_lifetime_output: Lifetime hourly system outputs [0/1]
	 * options: 0=hourly first year,1=hourly lifetime
	 * constraints: INTEGER,MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_Lifetime_system_use_lifetime_output_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// ThirdPartyOwnership parameters
	//

	/**
	 * Set elec_cost_with_system: Energy value [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ThirdPartyOwnership_elec_cost_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set elec_cost_without_system: Energy value [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_CashloanHeat_ThirdPartyOwnership_elec_cost_without_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// LCOS parameters
	//

	/**
	 * Set batt_annual_charge_energy: Battery annual energy charged [kWh]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_batt_annual_charge_energy_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set batt_annual_charge_from_system: Battery annual energy charged from system [kWh]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_batt_annual_charge_from_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set batt_annual_discharge_energy: Battery annual energy discharged [kWh]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_batt_annual_discharge_energy_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set batt_capacity_percent: Battery relative capacity to nameplate [%]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_batt_capacity_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set batt_salvage_percentage: Net pre-tax cash battery salvage value [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_batt_salvage_percentage_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set battery_total_cost_lcos: Battery total investment cost [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_battery_total_cost_lcos_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set charge_w_sys_ec_ym: Energy charge with system [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_charge_w_sys_ec_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set grid_to_batt: Electricity to grid from battery [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_grid_to_batt_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_batt_to_grid: Energy to grid from battery [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_monthly_batt_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_grid_to_batt: Energy to battery from grid [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_monthly_grid_to_batt_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_grid_to_load: Energy to load from grid [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_monthly_grid_to_load_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set monthly_system_to_grid: Energy to grid from system [kWh]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_monthly_system_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set true_up_credits_ym: Net annual true-up payments [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_true_up_credits_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set year1_monthly_ec_charge_gross_with_system: Energy charge with system before credits [$/mo]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_year1_monthly_ec_charge_gross_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set year1_monthly_ec_charge_with_system: Energy charge with system [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_year1_monthly_ec_charge_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set year1_monthly_electricity_to_grid: Electricity to/from grid [kWh/mo]
	 * options: None
	 * constraints: LENGTH=12
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_LCOS_year1_monthly_electricity_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// ElectricityRates parameters
	//

	/**
	 * Set rate_escalation: Annual electricity rate escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CashloanHeat_ElectricityRates_rate_escalation_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	/**
	 * FinancialParameters Getters
	 */

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_analysis_period_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_debt_fraction_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_FinancialParameters_federal_tax_rate_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_inflation_rate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_insurance_rate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_loan_rate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_loan_term_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_market_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_mortgage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_prop_tax_assessed_decline_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_prop_tax_cost_assessed_percent_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_property_tax_rate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_real_discount_rate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_salvage_percentage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_FinancialParameters_state_tax_rate_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_system_capacity_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FinancialParameters_system_heat_rate_nget(SAM_table ptr, SAM_error *err);


	/**
	 * SystemCosts Getters
	 */

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_add_om_num_types_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_annual_fuel_usage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_annual_fuel_usage_lifetime_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_batt_capacity_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_batt_fixed_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_batt_nameplate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_batt_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_batt_variable_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_capacity_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_capacity_heat_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_elec_price_for_heat_techs_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_elec_price_for_heat_techs_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_fixed_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_fixed_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_fuel_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_fuel_cost_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_fuelcell_capacity_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_fuelcell_fixed_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_fuelcell_nameplate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_fuelcell_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_fuelcell_variable_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_opt_fuel_1_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_opt_fuel_1_cost_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_opt_fuel_1_usage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_opt_fuel_2_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_opt_fuel_2_cost_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_opt_fuel_2_usage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_production1_values_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_production2_values_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_production_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemCosts_om_production_heat_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_om_replacement_cost_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_SystemCosts_total_installed_cost_nget(SAM_table ptr, SAM_error *err);


	/**
	 * LandLease Getters
	 */

	SAM_EXPORT double SAM_CashloanHeat_LandLease_land_area_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LandLease_om_land_lease_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_LandLease_om_land_lease_escal_nget(SAM_table ptr, SAM_error *err);


	/**
	 * Depreciation Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_Depreciation_depr_fed_custom_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Depreciation_depr_fed_sl_years_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Depreciation_depr_fed_type_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Depreciation_depr_sta_custom_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Depreciation_depr_sta_sl_years_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Depreciation_depr_sta_type_nget(SAM_table ptr, SAM_error *err);


	/**
	 * TaxCreditIncentives Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_itc_fed_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_fed_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_fed_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_itc_fed_percent_maxvalue_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_itc_sta_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_sta_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_sta_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_itc_sta_percent_maxvalue_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_amount_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_ptc_fed_term_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_amount_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_TaxCreditIncentives_ptc_sta_term_nget(SAM_table ptr, SAM_error *err);


	/**
	 * PaymentIncentives Getters
	 */

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_amount_heat_btu_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_fed_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_amount_heat_btu_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_oth_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_amount_heat_btu_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_sta_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_amount_heat_btu_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_cbi_uti_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_amount_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_fed_percent_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_amount_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_oth_percent_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_amount_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_sta_percent_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_amount_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_maxvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_ibi_uti_percent_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_fed_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_fed_amount_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_fed_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_fed_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_fed_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_fed_term_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_oth_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_oth_amount_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_oth_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_oth_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_oth_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_oth_term_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_sta_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_sta_amount_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_sta_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_sta_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_sta_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_sta_term_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_uti_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_PaymentIncentives_pbi_uti_amount_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_uti_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_uti_tax_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_uti_tax_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_PaymentIncentives_pbi_uti_term_nget(SAM_table ptr, SAM_error *err);


	/**
	 * BatterySystem Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_BatterySystem_batt_bank_replacement_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_BatterySystem_batt_computed_bank_capacity_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_BatterySystem_batt_replacement_option_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_BatterySystem_batt_replacement_schedule_percent_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_BatterySystem_battery_per_kWh_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_BatterySystem_en_batt_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_BatterySystem_en_standalone_batt_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_BatterySystem_en_wave_batt_nget(SAM_table ptr, SAM_error *err);


	/**
	 * FuelCell Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_FuelCell_annual_fuel_usage_lifetime_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FuelCell_en_fuelcell_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_FuelCell_fuelcell_annual_energy_discharged_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FuelCell_fuelcell_computed_bank_capacity_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FuelCell_fuelcell_per_kWh_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_FuelCell_fuelcell_replacement_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_FuelCell_fuelcell_replacement_option_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_FuelCell_fuelcell_replacement_schedule_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * ChargesByMonth Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_charge_w_sys_dc_tou_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_charge_w_sys_ec_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_charge_w_sys_fixed_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_net_billing_credits_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_nm_dollars_applied_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_true_up_credits_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ChargesByMonth_utility_bill_w_sys_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * Battery Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_Battery_batt_capacity_percent_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Battery_monthly_batt_to_grid_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Battery_monthly_grid_to_batt_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Battery_monthly_grid_to_load_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * TimeSeries Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_TimeSeries_year1_hourly_dc_with_system_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TimeSeries_year1_hourly_e_fromgrid_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_TimeSeries_year1_hourly_ec_with_system_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * SystemOutput Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_SystemOutput_annual_energy_value_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemOutput_annual_thermal_value_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemOutput_degradation_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemOutput_gen_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_SystemOutput_gen_purchases_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * Lifetime Getters
	 */

	SAM_EXPORT double SAM_CashloanHeat_Lifetime_system_use_lifetime_output_nget(SAM_table ptr, SAM_error *err);


	/**
	 * ThirdPartyOwnership Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_ThirdPartyOwnership_elec_cost_with_system_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_ThirdPartyOwnership_elec_cost_without_system_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * LCOS Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_batt_annual_charge_energy_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_batt_annual_charge_from_system_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_batt_annual_discharge_energy_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_batt_capacity_percent_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_LCOS_batt_salvage_percentage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_LCOS_battery_total_cost_lcos_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_charge_w_sys_ec_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_grid_to_batt_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_monthly_batt_to_grid_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_monthly_grid_to_batt_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_monthly_grid_to_load_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_monthly_system_to_grid_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_true_up_credits_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_year1_monthly_ec_charge_gross_with_system_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_year1_monthly_ec_charge_with_system_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_LCOS_year1_monthly_electricity_to_grid_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * ElectricityRates Getters
	 */

	SAM_EXPORT double* SAM_CashloanHeat_ElectricityRates_rate_escalation_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT double SAM_CashloanHeat_Outputs_adjusted_installed_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_fedtax_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_statax_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_total_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_total_oth_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_total_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cbi_total_uti_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_after_tax_cash_flow_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_after_tax_net_equity_cost_flow_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_annual_cost_lcos_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_annual_discharge_lcos_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_battery_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_battery_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_charging_cost_grid_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_charging_cost_grid_month_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_charging_cost_pv_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_cumulative_payback_with_expenses_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_cumulative_payback_without_expenses_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_debt_balance_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_debt_payment_interest_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_debt_payment_principal_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_debt_payment_total_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_deductible_expenses_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_discounted_costs_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_discounted_cumulative_payback_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_discounted_payback_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_discounted_savings_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_effective_tax_frac_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_energy_net_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_energy_net_heat_btu_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_energy_purchases_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_energy_sales_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_energy_value_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_energy_without_battery_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fed_depr_sched_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fed_depreciation_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fed_incentive_income_less_deductions_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fed_tax_savings_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fed_taxable_incentive_income_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fed_taxable_income_less_deductions_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_federal_tax_frac_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fuelcell_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_fuelcell_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_insurance_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_fed_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_fed_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_fed_percent_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_sta_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_sta_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_sta_percent_amount_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_itc_total_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_land_lease_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_cf_length_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_net_salvage_value_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_nte_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_batt_capacity_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_batt_fixed_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_capacity1_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_capacity2_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_capacity_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_elec_price_for_heat_techs_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_fixed1_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_fixed2_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_fixed_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_fuel_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_opt_fuel_1_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_opt_fuel_2_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_production1_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_production2_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_om_production_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_operating_expenses_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_parasitic_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_payback_with_expenses_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_payback_without_expenses_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_fedtax_total_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_statax_total_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_total_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_total_fed_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_total_oth_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_total_sta_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_pbi_total_uti_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_property_tax_assessed_value_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_property_tax_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_ptc_fed_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_ptc_sta_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_salvage_cost_lcos_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_and_fed_tax_savings_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_depr_sched_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_depreciation_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_incentive_income_less_deductions_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_tax_savings_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_taxable_incentive_income_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_sta_taxable_income_less_deductions_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_state_tax_frac_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_thermal_value_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_util_escal_rate_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_utility_bill_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_CashloanHeat_Outputs_cf_value_added_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_discounted_payback_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_effective_tax_rate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_first_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_fedtax_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_statax_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_total_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_total_oth_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_total_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_ibi_total_uti_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_itc_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_itc_total_fed_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_itc_total_sta_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcoe_nom_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcoe_real_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcoptc_fed_nom_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcoptc_fed_real_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcoptc_sta_nom_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcoptc_sta_real_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcos_nom_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lcos_real_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lnte_nom_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_lnte_real_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_loan_amount_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_npv_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_npv_annual_costs_lcos_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_npv_energy_lcos_nom_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_npv_energy_lcos_real_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_payback_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_present_value_fuel_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_present_value_insandproptax_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_present_value_oandm_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_present_value_oandm_nonfuel_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_total_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_wacc_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_CashloanHeat_Outputs_year1_nte_nget(SAM_table ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif