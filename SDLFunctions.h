/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SDLFunctions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:02:47 by rfriscca          #+#    #+#             */
/*   Updated: 2016/12/01 15:16:45 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SDLFunctions_H
# define SDLFunctions_H

# include "include/SDL2/SDL.h"
# include <unistd.h>

SDL_Window	*create_sdl_window(char *name, int width, int height);

#endif
