/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#include "nr-softmodem.h"
#include "PHY/types.h"
#include "../../nfapi/open-nFAPI/nfapi/public_inc/nfapi_interface_nr_extension.h"
//#include "PHY/defs.h"
#include "PHY/defs_NR.h"

//Temporary main function

void exit_fun(const char* s)
{

  int ru_id;

  if (s != NULL) {
    printf("%s %s() Exiting OAI softmodem: %s\n",__FILE__, __FUNCTION__, s);
  }

  /*oai_exit = 1;


    if (RC.ru == NULL)
        exit(-1); // likely init not completed, prevent crash or hang, exit now...
    for (ru_id=0; ru_id<RC.nb_RU;ru_id++) {
      if (RC.ru[ru_id] && RC.ru[ru_id]->rfdevice.trx_end_func)
	RC.ru[ru_id]->rfdevice.trx_end_func(&RC.ru[ru_id]->rfdevice);
      if (RC.ru[ru_id] && RC.ru[ru_id]->ifdevice.trx_end_func)
	RC.ru[ru_id]->ifdevice.trx_end_func(&RC.ru[ru_id]->ifdevice);  
    }*/
}

int main( int argc, char **argv )
{
  nfapi_param_t nfapi_params;
  NR_DL_FRAME_PARMS frame_parms;

  phy_init_nr_gNB(&nfapi_params);
  nr_init_frame_parms(nfapi_params, &frame_parms);
  nr_dump_frame_parms(&frame_parms);

  return 0;
}