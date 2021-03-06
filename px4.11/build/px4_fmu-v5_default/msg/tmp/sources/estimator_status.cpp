/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file estimator_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/estimator_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_estimator_status_fields[] = "uint64_t timestamp;float[24] states;float[3] vibe;float[24] covariances;float[3] output_tracking_error;uint32_t control_mode_flags;float pos_horiz_accuracy;float pos_vert_accuracy;float mag_test_ratio;float vel_test_ratio;float pos_test_ratio;float hgt_test_ratio;float tas_test_ratio;float hagl_test_ratio;float beta_test_ratio;float time_slip;uint16_t gps_check_fail_flags;uint16_t filter_fault_flags;uint16_t innovation_check_flags;uint16_t solution_status_flags;uint8_t n_states;bool pre_flt_fail_innov_heading;bool pre_flt_fail_innov_vel_horiz;bool pre_flt_fail_innov_vel_vert;bool pre_flt_fail_innov_height;bool pre_flt_fail_mag_field_disturbed;uint8_t health_flags;uint8_t timeout_flags;uint8_t[4] _padding0;";

ORB_DEFINE(estimator_status, struct estimator_status_s, 284, __orb_estimator_status_fields, static_cast<uint8_t>(ORB_ID::estimator_status));


void print_message(const estimator_status_s &message)
{

	PX4_INFO_RAW(" estimator_status_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tstates: [%.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f]\n", (double)message.states[0], (double)message.states[1], (double)message.states[2], (double)message.states[3], (double)message.states[4], (double)message.states[5], (double)message.states[6], (double)message.states[7], (double)message.states[8], (double)message.states[9], (double)message.states[10], (double)message.states[11], (double)message.states[12], (double)message.states[13], (double)message.states[14], (double)message.states[15], (double)message.states[16], (double)message.states[17], (double)message.states[18], (double)message.states[19], (double)message.states[20], (double)message.states[21], (double)message.states[22], (double)message.states[23]);
	PX4_INFO_RAW("\tvibe: [%.4f, %.4f, %.4f]\n", (double)message.vibe[0], (double)message.vibe[1], (double)message.vibe[2]);
	PX4_INFO_RAW("\tcovariances: [%.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f]\n", (double)message.covariances[0], (double)message.covariances[1], (double)message.covariances[2], (double)message.covariances[3], (double)message.covariances[4], (double)message.covariances[5], (double)message.covariances[6], (double)message.covariances[7], (double)message.covariances[8], (double)message.covariances[9], (double)message.covariances[10], (double)message.covariances[11], (double)message.covariances[12], (double)message.covariances[13], (double)message.covariances[14], (double)message.covariances[15], (double)message.covariances[16], (double)message.covariances[17], (double)message.covariances[18], (double)message.covariances[19], (double)message.covariances[20], (double)message.covariances[21], (double)message.covariances[22], (double)message.covariances[23]);
	PX4_INFO_RAW("\toutput_tracking_error: [%.4f, %.4f, %.4f]\n", (double)message.output_tracking_error[0], (double)message.output_tracking_error[1], (double)message.output_tracking_error[2]);
	PX4_INFO_RAW("\tcontrol_mode_flags: %" PRIu32 " (0b", message.control_mode_flags);
	for (int i = (sizeof(message.control_mode_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.control_mode_flags >> i & 1, ((unsigned)i < (sizeof(message.control_mode_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\tpos_horiz_accuracy: %.4f\n", (double)message.pos_horiz_accuracy);
	PX4_INFO_RAW("\tpos_vert_accuracy: %.4f\n", (double)message.pos_vert_accuracy);
	PX4_INFO_RAW("\tmag_test_ratio: %.4f\n", (double)message.mag_test_ratio);
	PX4_INFO_RAW("\tvel_test_ratio: %.4f\n", (double)message.vel_test_ratio);
	PX4_INFO_RAW("\tpos_test_ratio: %.4f\n", (double)message.pos_test_ratio);
	PX4_INFO_RAW("\thgt_test_ratio: %.4f\n", (double)message.hgt_test_ratio);
	PX4_INFO_RAW("\ttas_test_ratio: %.4f\n", (double)message.tas_test_ratio);
	PX4_INFO_RAW("\thagl_test_ratio: %.4f\n", (double)message.hagl_test_ratio);
	PX4_INFO_RAW("\tbeta_test_ratio: %.4f\n", (double)message.beta_test_ratio);
	PX4_INFO_RAW("\ttime_slip: %.4f\n", (double)message.time_slip);
	PX4_INFO_RAW("\tgps_check_fail_flags: %u (0b", message.gps_check_fail_flags);
	for (int i = (sizeof(message.gps_check_fail_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.gps_check_fail_flags >> i & 1, ((unsigned)i < (sizeof(message.gps_check_fail_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\tfilter_fault_flags: %u (0b", message.filter_fault_flags);
	for (int i = (sizeof(message.filter_fault_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.filter_fault_flags >> i & 1, ((unsigned)i < (sizeof(message.filter_fault_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\tinnovation_check_flags: %u (0b", message.innovation_check_flags);
	for (int i = (sizeof(message.innovation_check_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.innovation_check_flags >> i & 1, ((unsigned)i < (sizeof(message.innovation_check_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\tsolution_status_flags: %u (0b", message.solution_status_flags);
	for (int i = (sizeof(message.solution_status_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.solution_status_flags >> i & 1, ((unsigned)i < (sizeof(message.solution_status_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\tn_states: %u\n", message.n_states);
	PX4_INFO_RAW("\tpre_flt_fail_innov_heading: %s\n", (message.pre_flt_fail_innov_heading ? "True" : "False"));
	PX4_INFO_RAW("\tpre_flt_fail_innov_vel_horiz: %s\n", (message.pre_flt_fail_innov_vel_horiz ? "True" : "False"));
	PX4_INFO_RAW("\tpre_flt_fail_innov_vel_vert: %s\n", (message.pre_flt_fail_innov_vel_vert ? "True" : "False"));
	PX4_INFO_RAW("\tpre_flt_fail_innov_height: %s\n", (message.pre_flt_fail_innov_height ? "True" : "False"));
	PX4_INFO_RAW("\tpre_flt_fail_mag_field_disturbed: %s\n", (message.pre_flt_fail_mag_field_disturbed ? "True" : "False"));
	PX4_INFO_RAW("\thealth_flags: %u (0b", message.health_flags);
	for (int i = (sizeof(message.health_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.health_flags >> i & 1, ((unsigned)i < (sizeof(message.health_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\ttimeout_flags: %u (0b", message.timeout_flags);
	for (int i = (sizeof(message.timeout_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%u%s", message.timeout_flags >> i & 1, ((unsigned)i < (sizeof(message.timeout_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	
}
