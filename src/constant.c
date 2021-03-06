/*
 * constant.c
 *
 *  Created on: 22 Mar 2020
 *      Author: hinchr
 */

#include "constant.h"

const int AGE_WORK_MAP[N_AGE_GROUPS] = {
	NETWORK_0_9,
	NETWORK_10_19,
	NETWORK_20_69,
	NETWORK_20_69,
	NETWORK_20_69,
	NETWORK_20_69,
	NETWORK_20_69,
	NETWORK_70_79,
	NETWORK_80
};

const int NETWORK_TYPE_MAP[N_WORK_NETWORKS] = {
	NETWORK_TYPE_CHILD,
	NETWORK_TYPE_CHILD,
	NETWORK_TYPE_ADULT,
	NETWORK_TYPE_ELDERLY,
	NETWORK_TYPE_ELDERLY
};

const int AGE_TYPE_MAP[N_AGE_GROUPS] = {
	AGE_TYPE_CHILD,
	AGE_TYPE_CHILD,
	AGE_TYPE_ADULT,
	AGE_TYPE_ADULT,
	AGE_TYPE_ADULT,
	AGE_TYPE_ADULT,
	AGE_TYPE_ADULT,
	AGE_TYPE_ELDERLY,
	AGE_TYPE_ELDERLY
};

const char* AGE_TEXT_MAP[N_AGE_GROUPS] = {
	"0-9 years",
	"10-19 years",
	"20-29 years",
	"30-39 years",
	"40-49 years",
	"50-59 years",
	"60-69 years",
	"70-79 years",
	"80+ years"
};

gsl_rng * rng;
