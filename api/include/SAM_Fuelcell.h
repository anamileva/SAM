#ifndef SAM_FUELCELL_H_
#define SAM_FUELCELL_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// Fuelcell Technology Model
	//

	/** 
	 * Create a Fuelcell variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_Fuelcell;

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_Fuelcell_execute(SAM_table data, int verbosity, SAM_error* err);


	//
	// Lifetime parameters
	//

	/**
	 * Set analysis_period: Lifetime analysis period [years]
	 * options: The number of years in the simulation
	 * constraints: None
	 * required if: system_use_lifetime_output=1
	 */
	SAM_EXPORT void SAM_Fuelcell_Lifetime_analysis_period_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set system_use_lifetime_output: Lifetime simulation [0/1]
	 * options: 0=SingleYearRepeated,1=RunEveryYear
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_Lifetime_system_use_lifetime_output_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// Common parameters
	//

	/**
	 * Set annual_energy: Annual AC energy in Year 1 [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_Common_annual_energy_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set capacity_factor: Capacity factor [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_Common_capacity_factor_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set gen: System power generated [kW]
	 * options: Lifetime system generation
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_Common_gen_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// Load parameters
	//

	/**
	 * Set load: Electricity load (year 1) [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_Load_load_aset(SAM_table ptr, double* arr, int length, SAM_error *err);


	//
	// FuelCell parameters
	//

	/**
	 * Set dispatch_manual_fuelcell_sched: Dispatch schedule for weekday
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_dispatch_manual_fuelcell_sched_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set dispatch_manual_fuelcell_sched_weekend: Dispatch schedule for weekend
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_dispatch_manual_fuelcell_sched_weekend_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set dispatch_manual_fuelcellcharge: Periods 1-6 charging allowed?
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_dispatch_manual_fuelcellcharge_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set dispatch_manual_fuelcelldischarge: Periods 1-6 discharging allowed?
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_dispatch_manual_fuelcelldischarge_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set dispatch_manual_percent_fc_discharge: Periods 1-6 percent of max fuelcell output
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_dispatch_manual_percent_fc_discharge_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set dispatch_manual_units_fc_discharge: Periods 1-6 number of fuel cell units?
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_dispatch_manual_units_fc_discharge_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set fuelcell_availability_schedule: Fuel cell availability schedule  [Column 1: Hour of year start shutdown/Column 2: Hours duration of shutdown ]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_availability_schedule_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set fuelcell_degradation: Fuel cell degradation per hour [kW/h]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_degradation_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_degradation_restart: Fuel cell degradation at restart [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_degradation_restart_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_degradation_restart_schedule: Fuel cell enable scheduled restarts [0/1]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_degradation_restart_schedule_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_degradation_restarts_per_year: Fuel cell scheduled restarts per year
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_degradation_restarts_per_year_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_dispatch: Fuel cell dispatch input per unit [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_dispatch_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set fuelcell_dispatch_choice: Fuel cell dispatch choice [0/1/2]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_dispatch_choice_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_dynamic_response_down: Fuel cell ramp rate limit down [kW/h]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_dynamic_response_down_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_dynamic_response_up: Fuel cell ramp rate limit up [kW/h]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_dynamic_response_up_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_efficiency: Fuel cell efficiency table 
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_efficiency_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set fuelcell_efficiency_choice: Fuel cell efficiency definition choice  [0/1]
	 * options: 0=OriginalNameplate,1=DegradedNameplate
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_efficiency_choice_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_fixed_pct: Fuel cell fixed operation percent [%]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_fixed_pct_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_fuel_available: Fuel cell available fuel quantity [MCf]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_fuel_available_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_fuel_price: Fuel cell price [$/MCf]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_fuel_price_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_fuel_type: Fuel cell type [0/1]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_fuel_type_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_is_started: Fuel cell is started [0/1]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_is_started_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_lhv: Fuel cell lower heating value [Btu/ft3]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_lhv_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_number_of_units: Fuel cell number of units
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_number_of_units_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_operation_options: Fuel cell turn off options [0/1]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_operation_options_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_replacement_option: Fuel cell replacement option [0/1/2]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_replacement_option_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_replacement_percent: Fuel cell replace at percentage
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_replacement_percent_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_replacement_schedule: Fuel cell replace on schedule
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_replacement_schedule_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set fuelcell_shutdown_time: Fuel cell shutdown hours [hours]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_shutdown_time_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_startup_time: Fuel cell startup hours [hours]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_startup_time_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_type: Fuel cell type [0/1/2]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_type_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_unit_max_power: Fuel cell max power per unit [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_unit_max_power_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set fuelcell_unit_min_power: Fuel cell min power per unit [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Fuelcell_FuelCell_fuelcell_unit_min_power_nset(SAM_table ptr, double number, SAM_error *err);


	//
	// HybridCosts parameters
	//

	/**
	 * Set add_om_num_types: Number of O and M types
	 * options: battery,fuelcell
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_add_om_num_types_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set degradation: Annual AC degradation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_degradation_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set land_area: Total land area [acres]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_land_area_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_capacity_escal: Capacity-based O&M escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_capacity_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fixed_escal: Fixed O&M escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fixed_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fuel_cost: Fuel cost [$/MMBtu]
	 * options: custom_generation,fuelcell,tcslinearfresnel,tcstroughempirical,tcsgenericsolar,fresnelphysical
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuel_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuel_cost_escal: Fuel cost escalation [%/year]
	 * options: custom_generation,fuelcell,tcslinearfresnel,tcstroughempirical,tcsgenericsolar,fresnelphysical
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuel_cost_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fuelcell_capacity_cost: Fuel cell capacity-based System Costs amount [$/kWcap]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuelcell_capacity_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuelcell_fixed_cost: Fuel cell fixed System Costs annual amount [$/year]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuelcell_fixed_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuelcell_nameplate: Fuel cell capacity for System Costs values [kW]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuelcell_nameplate_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_fuelcell_replacement_cost: Replacement cost 2 [$/kW]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuelcell_replacement_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_fuelcell_variable_cost: Fuel cell production-based System Costs amount [$/MWh]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_fuelcell_variable_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_land_lease: Land lease cost [$/acre]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_land_lease_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_land_lease_escal: Land lease cost escalation [%/yr]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_land_lease_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_production2_values: Fuel cell production for System Costs values [kWh]
	 * options: fuelcell
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_production2_values_aset(SAM_table ptr, double* arr, int length, SAM_error *err);

	/**
	 * Set om_production_escal: Production-based O&M escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_production_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set om_replacement_cost_escal: Replacement cost escalation [%/year]
	 * options: battery,fuelcell
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_om_replacement_cost_escal_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set total_installed_cost: Total installed cost [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Fuelcell_HybridCosts_total_installed_cost_nset(SAM_table ptr, double number, SAM_error *err);


	/**
	 * Lifetime Getters
	 */

	SAM_EXPORT double SAM_Fuelcell_Lifetime_analysis_period_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_Lifetime_system_use_lifetime_output_nget(SAM_table ptr, SAM_error *err);


	/**
	 * Common Getters
	 */

	SAM_EXPORT double SAM_Fuelcell_Common_annual_energy_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_Common_capacity_factor_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Common_gen_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * Load Getters
	 */

	SAM_EXPORT double* SAM_Fuelcell_Load_load_aget(SAM_table ptr, int* length, SAM_error *err);


	/**
	 * FuelCell Getters
	 */

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_dispatch_manual_fuelcell_sched_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_dispatch_manual_fuelcell_sched_weekend_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_dispatch_manual_fuelcellcharge_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_dispatch_manual_fuelcelldischarge_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_dispatch_manual_percent_fc_discharge_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_dispatch_manual_units_fc_discharge_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_fuelcell_availability_schedule_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_degradation_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_degradation_restart_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_degradation_restart_schedule_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_degradation_restarts_per_year_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_fuelcell_dispatch_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_dispatch_choice_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_dynamic_response_down_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_dynamic_response_up_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_fuelcell_efficiency_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_efficiency_choice_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_fixed_pct_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_fuel_available_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_fuel_price_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_fuel_type_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_is_started_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_lhv_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_number_of_units_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_operation_options_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_replacement_option_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_replacement_percent_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_FuelCell_fuelcell_replacement_schedule_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_shutdown_time_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_startup_time_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_type_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_unit_max_power_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_FuelCell_fuelcell_unit_min_power_nget(SAM_table ptr, SAM_error *err);


	/**
	 * HybridCosts Getters
	 */

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_add_om_num_types_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_degradation_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_land_area_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_capacity_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_fixed_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_fuel_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_fuel_cost_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_fuelcell_capacity_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_fuelcell_fixed_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_fuelcell_nameplate_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_fuelcell_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_fuelcell_variable_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_land_lease_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_land_lease_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_HybridCosts_om_production2_values_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_production_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_om_replacement_cost_escal_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_HybridCosts_total_installed_cost_nget(SAM_table ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT double SAM_Fuelcell_Outputs_annual_energy_discharged_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_annual_energy_distribution_time_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_annual_energy_distribution_time_fc_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_Outputs_annual_fuel_usage_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_annual_fuel_usage_lifetime_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_battery_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_energy_net_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_fuelcell_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_land_lease_expense_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_om_capacity_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_om_fixed_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_om_fuel_cost_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_om_land_lease_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_cf_om_production_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_annual_energy_discharged_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_electrical_efficiency_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_fuel_consumption_mcf_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_monthly_energy_discharged_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_percent_load_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_power_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_power_max_percent_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_power_thermal_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_replacement_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_to_grid_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_fuelcell_to_load_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double* SAM_Fuelcell_Outputs_gen_aget(SAM_table ptr, int* length, SAM_error *err);

	SAM_EXPORT double SAM_Fuelcell_Outputs_system_heat_rate_nget(SAM_table ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif